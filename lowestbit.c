//Write a C program to get lowest set bit of a number.

#include <stdio.h>
#define INTSIZE sizeof(int) * 8 

int main()
{
    int num, order, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    order = INTSIZE - 1;
    for(i=0; i<INTSIZE; i++)
    {
        if((num>>i) & 1)
        {
            order = i;
            break;
        }
    }

    printf("Lowest order set bit in %d is %d", num, order);

    return 0;
}
