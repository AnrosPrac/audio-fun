#include<stdio.h>
#include<stdlib.h>
#define null 0
void main()
{
int n=5,*arr;

if((int*)calloc(n,sizeof(int))==null)
{
printf("no space available");

}
arr=(int*)calloc(n,sizeof(int));
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