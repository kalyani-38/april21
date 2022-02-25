//register
#include <stdio.h>  
int main()  
{  
register int a; // variable a is allocated memory in the CPU register.  
printf("%d",a);  
}  
//
#include <stdio.h>  
int main()  
{  
register int a = 0;   
printf("%u",&a); // This will give a compile time error since we can not access the address of a register variable.   
}  
