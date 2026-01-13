#include <stdio.h>
void copystring(char *source,char *destination)
{
while(*source!='\0'){
*destination=*source;
source++;
destination++;
}
*destination='\0';
}
int main()
{
char str1[100],str2[100];
printf("enter a string:");
fgets(str1,100,stdin);
copystring(str1,str2);    
    
printf("copied string:%s",str2);
return 0;
}