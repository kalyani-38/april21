// program to find summation of a number
#include <stdio.h>
long int summation(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    
    if(num<0)
    printf("no summation for negative number\n");
    else
     printf("summation of %d is %ld\n",num,summation(num));

    return 0;
}
long int summation(int n)
{
    if(n==0)
    return 0;
    return(n+summation(n-1));
}
