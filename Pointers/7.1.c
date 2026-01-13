#include<stdio.h>
int swap(int *a,int *b)
    {
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("%d\n %d\n",*a,*b);
}
void main()
{
int x,y;
printf("enter two nos:\n");
scanf("%d %d",&x,&y);
int *a,*b;
a=&x;
b=&y;
printf("swapped nos");
swap(&x,&y);
}

