#include<stdio.h>
int square(int *a)
{
int x=(*a)*(*a);
return(x);
}
void main()
{
int x,y;
printf("enter the no to be squared:\n");
scanf("%d",&x);
printf("sqaure=%d",square(&x));


}