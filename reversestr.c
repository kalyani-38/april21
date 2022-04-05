//reverse a srting
#include <stdio.h>
#include <string.h>

int main()
{
   int l,i,c;
   char s1[30];
   printf("enter string");
   gets(s1);
   l=strlen(s1);
   for(i=0;i<l/2;i++)
   {
       c=s1[i];
       s1[i]=s1[l-1-i];
       s1[l-1-i]=c;
   }
   printf("%s",s1);
    return 0;
}
