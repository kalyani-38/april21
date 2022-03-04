// program for to revers a numbers using recursion
#include <stdio.h>
int sum=0,rem;
int main()
{
  int num,revnum=0;
  printf("enter number");
  scanf("%d",&num);
  revnum=revnumfunction(num);
  printf("the number after revers=%d",revnum);
  
  
  return 0;
}
int revnumfunction(int num)
{
    if(num)
    {
        rem=num%10;
        sum=sum*10+rem;
        revnumfunction(num/10);
    }
    
    else
    return sum;
