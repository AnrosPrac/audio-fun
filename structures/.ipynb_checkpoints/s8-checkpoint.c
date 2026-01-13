#include <stdio.h>

typedef struct{
    int length;
    int bredth;
} rectangle;

int area_of_rectangle(rectangle r){
    int l = r.length;
    int b = r.bredth;
    return l*b;
}

int main()
{
    rectangle r1;
    printf("-- -- -- -- Rectange length and bredth input -- -- -- -- \n");
    printf("Enter the length of the the recatangle : \n");
    scanf("%d",&r1.length);
     printf("Enter the bredth of the the recatangle : \n");
    scanf("%d",&r1.bredth);


int result = area_of_rectangle(r1);
printf("-- -- -- Area of the rectangle -- -- -- \n");
printf("Arean: %d \n",result);
    return 0;
}
