//Write a C program to count total zeros and ones in a binary number
#include <stdio.h>
#define INTSIZE sizeof(int) * 8 

int main()
{
    int num, zeros, ones, i;

    printf("Enter any number: ");
    scanf("%d", &num);

    zeros = 0;
    ones = 0;

    for(i=0; i<INTSIZE; i++)
    {
        if(num & 1)
            ones++;
        else
            zeros++;
        num >>= 1;
    }

    printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d", ones);

    return 0;
}
