// with arguments with return type finding sum of any number
#include <stdio.h>
int sum(int n);
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    printf("sum of digits of %d is %d\n is",num,sum(num));
    return 0;
    
}
int sum(int n)
{
     int sum=0;
     while(n>0)
     {
    sum+=n%10;
    n/=10;
     }
    return sum;
     
}
