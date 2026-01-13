#include <stdio.h>

union Test {
    int i;
    float f;
};

int main()
{
    union Test data;
   printf("Size of union 'tests': %zu bytes\n\n", sizeof(data));
printf("Assigning to the integer member 'i'\n");
    data.i = 65;
    printf("data.i (Int): %d\n", data.i);
    printf("data.f (Float - Corrupted): %f\n", data.f);
    printf(" Assigning to the float member 'f'\n");
    data.f = 3.14159; 
   
    printf("data.f (Float): %f\n", data.f); 
    
  
    printf("data.i (Int - Overwritten): %d\n", data.i);
    return 0;
}
