//external
first.c file
#include <stdio.h>
extern int i;
int main()
{
   printf("value of the external integer is = %d\n", i);
   return 0;
    
}
//second.c
#include <stdio.h>
int  i=48;
//#include <stdio.h>  
int main()  
{  
extern int a;   
printf("%d",a); //undefined a it shows error 
}  

