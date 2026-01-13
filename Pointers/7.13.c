#include<stdio.h>
#include<stdlib.h>
#define null 0
void main()
{
int n,*arr;
printf("enter the value of n: ");
scanf("%d",&n);
if((int*)malloc(n*sizeof(int))==null)
{
printf("no space available");

}
arr=(int*)malloc(n*sizeof(int));
printf("enter the numbers ");
for(int i=0;i<n;i++)
{
scanf("%d",(arr+i));
}printf("the entered numbers:\n ");
for(int i=0;i<n;i++)
{
printf("%d\n",*(arr+i));
}

}