#include<stdio.h>
#include<stdlib.h>
#define null 0
void main()
{
int n,*arr,sum=0;
printf("enter the number of elements:\n");
scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
if ((int*)malloc(n*sizeof(int))==null)
{
printf("no space available");

}

printf("enter the numbers to be added:");
for(int i=0;i<n;i++)
{
scanf("%d",(arr+i));
sum+=*(arr+i);
}
printf("Sum=%d",sum);
}