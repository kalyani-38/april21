// program to understand the use of global variables
#include <stdio.h>
void func1();
void func2();
int a,b=6;
int main()
{
    printf("a=%d,b=%d\n",a,b);
    func1();
    func2();
    return 0;
    
}
void func1()
{
    printf("a=%d,b=%d\n",a,b);
    
}
void func2()
{
    int a=8;
    printf("a=%d,b=%d\n",a,b);
}
