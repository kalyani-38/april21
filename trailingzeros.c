//Write a C program to count trailing zeros in a binary number.

#include <stdio.h>
#define INTSIZE sizeof(int) * 8 

int main()
{
    int num=48, count, i;

    
    printf("Enter any number: ");
    scanf("%d", &num);

    count = 0;
    for(i=0; i<INTSIZE; i++)
    {
        if((num >> i ) & 1)
        {
            break;
        }
        count++;
    }

    printf("Total number of trailing zeros in %d is %d.", num, count);

    return 0;
}
