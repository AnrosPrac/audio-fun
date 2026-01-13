#include<stdio.h>
int rev(int *arr,int n)
{
printf("reversed array\n");
for(int i=n-1;i>=0;i--)
{
printf("%d\n",arr+i);
}
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
        
    }
    rev(arr,n);
}