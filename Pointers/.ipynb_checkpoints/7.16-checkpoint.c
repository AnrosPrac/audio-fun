#include<stdio.h>
#include<stdlib.h>
#define null 0
void main()
{
int n=3,*arr;
 arr=(int*)malloc(n*sizeof(int));
if (arr==0)
{
printf("no space available");

}
   
printf("enter the numbers :");
for(int i=0;i<n;i++)
{
scanf("%d",(arr+i));    
}
    for(int k=0;k<n;k++)
{
    printf("arr[%d]=%d\n",k,*(arr+k));
}
    arr=(int*)realloc(arr,5*sizeof(int));
  printf("enter the remaining two numbers\n");
    for(int i=3;i<5;i++)
{
scanf("%d",(arr+i));
    printf("arr[%d]=%d\n",i,*(arr+i));
}}