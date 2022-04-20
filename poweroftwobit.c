//Write a C program to check if the given number is power of 2.
#include <stdio.h>

int main()
{
  unsigned  int n;
    printf("Enter any number: ");
    scanf("%u", &n);
if((n&(n-1))==0)
printf("%d is power of 2\n",n);
else
printf("%d is not power of 2\n",n);
   
    return 0;
}

    return 0;
}
