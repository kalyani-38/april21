// WAP to reverse a num using fun
#include<stdio.h>
int reverse(int n);
int main()
{
    int num;
    
    printf("enter the number");
    scanf("%d",&num);
    
    printf("the reverse number is=%d\n",reverse(num));
     
    return 0;
}
int reverse(int n)
{
  int rev=0;
  do
  {
      rev=rev*10+n%10;
      n/=10;
  }
  while(n>0);
  return rev;
}
