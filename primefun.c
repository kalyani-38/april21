// WAP to isprime a num using fun
#include<stdio.h>
int isprime(int n);
int main()
{
int num=13;
if(isprime(num))
printf("number is prime ");
else
printf("number is not prime ");
    return 0;
}
int isprime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    if(n%i!=0)
    return 1;
    return 0;
}
