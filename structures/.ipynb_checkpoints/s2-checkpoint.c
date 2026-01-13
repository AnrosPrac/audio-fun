#include <stdio.h>
struct point {
    float x;
    float y;
};
int main()
{  struct point p1;
printf("--------COORDINATE INPUTS-------- \n");
    printf("Enter the value of the x-corordnate : \n");
    scanf("%f",&p1.x);
     printf("Enter the value of the y-corordnate : \n");
    scanf("%f",&p1.y);
    printf("--------COORDINATE OUTPUTS-------- \n");
    printf("X-coordinate : %f \n",p1.x);
    printf("Y-coordinate : %f \n",p1.y);
    return 0;
}
