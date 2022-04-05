//Write a C program to find countof  a character in a given string.

#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100],c;  
    int i,n,count=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
		  count++;
    	  
		}
 	}
    
 	    printf("character  %c  is count occurrence at:%d ",c,count);
    return 0;
}




