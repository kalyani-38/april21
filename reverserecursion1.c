// Write a C program to find reverse of any number using recursion.
#include<stdio.h>
int reverse(int);
void main()
{
  int n=123,res;
  res=reverse(n);
  printf("reverse of %d is %d",n,res);
}
int r,sum=0;
int reverse(int x)
{
    if(x>0)
    {
        r=x%10;
        sum=sum*10+r;
        reverse(x/10);
        
    }
    else
    return sum;
} 
