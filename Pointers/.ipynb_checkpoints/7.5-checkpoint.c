#include<stdio.h>
void main()
{
int arr[5];

printf("enter the numbers in the array:\n" );
for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("the given array :");
int *p=arr;
for(int i=0;i<5;i++)
{
printf("%d \n",*(arr+i));
    p++;
}
}