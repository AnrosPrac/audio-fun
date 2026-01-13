#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char *str,*rev;

str=(char*)malloc(100*sizeof(char));
   
printf("enter the string:\n");
    fgets(str, 100, stdin); 
str[strcspn(str, "\n")] = '\0'; 
    int l = strlen(str); 
    printf("revesed string :\n");
    for(int i=l-1;i>=0;i--)
{
    printf("%c",*(str+i));
}
}