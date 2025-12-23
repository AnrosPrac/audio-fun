import { KokoroTTS } from "https://cdn.jsdelivr.net/npm/kokoro-js@1.0.1/dist/kokoro.web.js";

let tts = null;

self.onmessage = async (e) => {
  const { type, text, voice } = e.data;

  if (type === 'init') {
    tts = await KokoroTTS.from_pretrained("onnx-community/Kokoro-82M-ONNX", {
      dtype: "q4", 
      device: "wasm"
    });
    self.postMessage({ type: 'ready' });
  }

  if (type === 'generate') {
    // CTO FIX: Force-split text into chunks of roughly 10 words
    // This prevents the 'long sentence lag' entirely
    const words = text.trim().split(/\s+/);
    const chunks = [];
    
    for (let i = 0; i < words.length; i += 10) {
      chunks.push(words.slice(i, i + 10).join(" "));
    }

    try {
      for (let i = 0; i < chunks.length; i++) {
        const audioData = await tts.generate(chunks[i], { 
          voice, 
          speed: 1.2 // Internal model speed (different from playback speed)
        });
        
        const blob = await audioData.toBlob();
        // Send to UI immediately
        self.postMessage({ 
          type: 'audio', 
          blob: blob, 
          isFirst: i === 0 
        });
      }
      self.postMessage({ type: 'status', message: "Lecture Fully Loaded" });
    } catch (err) {
      self.postMessage({ type: 'status', message: "Error: " + err.message });
    }
  }
};