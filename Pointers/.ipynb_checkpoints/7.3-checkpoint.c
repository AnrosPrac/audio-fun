#include<stdio.h>
int sum(int *a,int *b)
{
int x,y,sum;
x=*a;
y=*b;
sum=*a+*b;
printf("sum=%d",sum);
}
void main()
{
int x,y;
printf("enter two nos:\n");
scanf("%d %d",&x,&y);
int *a,*b;
a=&x;
b=&y;
sum(&x,&y);
}