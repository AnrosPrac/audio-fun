#include<stdio.h>
#include<stdlib.h>
void main()
{
int *arr,n;
float average;
int sum=0;
printf("enter the number of elements:\n");
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
printf("enter the  elements:\n");
for(int i=0;i<n;i++)
{
scanf("%d",arr+i);
sum+=*(arr+i);
}
average=sum/n;
printf("average=%f",average);
}