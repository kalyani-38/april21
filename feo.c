//program to find number is even or odd
#include <stdio.h>
int find(int n);
int main()
{
    int num=11;
    find(num);

    return 0;
}
int find(int n)
{
    
   if(n%2==0)
   printf("the number is even=%d",n);
   else
   printf("the number is odd=%d",n);
   return n;
}
