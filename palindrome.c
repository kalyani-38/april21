// WAP to ispalindrome a num using fun
#include<stdio.h>
int reverse(int n);
int ispalindrome(int num);
int main()
{
    int num;
    
    printf("enter the number");
    scanf("%d",&num);
    if(ispalindrome(num))
    printf("numbers is palidrome\n");
    else
    printf("numbers is not palidrome\n");
    
    return 0;
}
int ispalindrome(int num)
{
    if(num==reverse(num))
    return 1;
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
