#include<stdio.h>
int comp(int *x,int *y)
{
int a=*x;
int b=*y;
if(a>b)
printf("%d is large",a);
else if(a<b)
printf("%d is large",b);
else{
printf("both are equal");}

}
void main()
{
int x,y;
printf("enter two nos:\n");
scanf("%d %d",&x,&y);
    int *a,*b;
    a=&x;
    b=&y;
    comp(&x,&y);
}