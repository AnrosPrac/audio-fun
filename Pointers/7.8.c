#include<stdio.h>
#include<string.h>
int length(char *str)
{
    int len=0;
while(str[len]!='\0')
{
    ++len;
}len=len-1;
    printf("string length=%d",len);
}
void main()
{
char str[50];
printf(" enter the string:\n");
fgets(str,50,stdin);
length(str);
}
