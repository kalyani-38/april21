// program to understand the comma operator
#include <stdio.h>

int main()
{
  int a,b,c,sum;
 sum=(a=1,b=2,c=3,a+b+c);
  printf("sum of numbers is %d\n",sum);
    return 0;
}
