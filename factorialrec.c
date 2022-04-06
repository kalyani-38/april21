//Write a C program to find factorial of any number using recursion.
#include <stdio.h>
int fact(int n);
int main()
{
    int num;
    
    printf("entet the number:");
    scanf("%d",&num);
    if(num<0)
    printf("no factorial for negative number");
    else
    printf("factorial of %d id %d\n",num,fact(num));
    

    return 0;
}
int fact(int n)
{
    if(n==0)
    return 1;
    return(n*fact(n-1));
    
}
