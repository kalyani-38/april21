//Write a C program to find summation of any number using recursion.
#include <stdio.h>
int summation(int n);
int main()
{
    int num;
    
    printf("entet the number:");
    scanf("%d",&num);
    if(num<0)
    printf("no factorial for negative number");
    else
    printf("summation  of %d id %d\n",num,summation(num));
    

    return 0;
}
int summation(int n)
{
    if(n==0)
    return 1;
    return(n+summation(n-1));
    
}
