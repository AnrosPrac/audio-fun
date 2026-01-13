#include<stdio.h>
int sum(int *arr,int n)
{int add=0;
for(int i=0;i<n;i++)
{
add=add+ *(arr+i);
}printf("sum=%d",add);
}
void main()
{
int n;
printf("enter the value of n \n");
scanf("%d",&n);
int arr[n];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        
    } int *p=arr;
sum(arr, n);
}