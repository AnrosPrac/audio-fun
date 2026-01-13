#include<stdio.h>
#include<string.h>
char rev(char *str,int l)
{char *rev;
    
{while(*str!='\0')
    *str=*rev;
        str--;
        rev++;
}
   *rev='\0';
 printf("reversed string =%s",rev);
}
    


void main()
{int i=100;
char str1[100];
    printf("enter a string:");
fgets(str1,100,stdin);
 int l=strlen(str1);
    rev(str1,l);

}
