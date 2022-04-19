//Write a C program to count leading zeros in a binary number.

#include <stdio.h>
#define INTSIZE sizeof(int) * 8

int main()
{
    int num, count, msb, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    msb = 1 << (INTSIZE - 1);

    count = 0;
    for(i=0; i<INTSIZE; i++)
    {

        if((num << i) & msb)
        {
           
            break;
        }

        count++;
    }

    printf("Total number of leading zeros in %d is %d", num, count);

    return 0;
}
