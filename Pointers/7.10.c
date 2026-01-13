#include<stdio.h>
#include<string.h>
void rev(char *str,int l)
{char *rev;
     if (l > 0 && str[l - 1] == '\n') {
        str[l - 1] = '\0'; 
        l--;
    }
 int start=0;
 int end=l-1;
 char temp;
 while(start<end)
 {
    temp= str[start];
     str[start]=str[end];
     str[end]=temp;
     start++;
     end--;
 }
 

 printf("reversed string =%s",str);
}
    


void main()
{int i=100;
char str1[100];
    printf("enter a string:");
fgets(str1,100,stdin);
 int l=strlen(str1);
    rev(str1,l);

}
