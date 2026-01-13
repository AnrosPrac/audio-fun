#include<stdio.h>
#include<stdlib.h>
void main()
{
int l;
char *str;
printf("enter the length of string :\n");
scanf("%d",&l);
str=(char*)malloc(l*sizeof(char));
printf("enter the string:\n");
for(int i=0;i<=l;i++)
{
    scanf("%c",str+i);
}
printf("entered string=%s",str);
}