//program to print the address of variable operator
#include <stdio.h>

int main()
{
   int age=30;
   float salary=200.20;
   printf("the age is %p\n",&age);
   printf("the salary is %p\n",&salary);

    return 0;
}
