//Write a C program to swap even and odd bits.

#include <stdio.h>

int main()
{
  unsigned  int num;
    printf("Enter any number: ");
    scanf("%u", &num);

   unsigned int odd=num & 0xAAAAAAAA;
    unsigned int even=num & 0x55555555;
    printf("%u",(odd>>1)|(even<<1));
   
    return 0;
}
