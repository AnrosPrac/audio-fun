import { KokoroTTS } from "https://cdn.jsdelivr.net/npm/kokoro-js@1.0.1/dist/kokoro.web.js";

let tts = null;

self.onmessage = async (e) => {
  const { type, text, voice, index } = e.data;

  if (type === 'init') {
    tts = await KokoroTTS.from_pretrained("onnx-community/Kokoro-82M-ONNX", {
      dtype: "q4", 
      device: "wasm"
    });
    self.postMessage({ type: 'ready' });
  }

  if (type === 'generate') {
    try {
      const audioData = await tts.generate(text, { voice, speed: 1.1 });
      const blob = await audioData.toBlob();
      self.postMessage({ type: 'audio', blob: blob, index: index });
    } catch (err) {
      console.error("Worker Error:", err);
    }
  }
};