//Write a C program to clear nth bit of a number.

#include <stdio.h>

int main()
{
    int num, n, newnum;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to clear (0-31): ");
    scanf("%d", &n);
    newnum = num & (~(1 << n));
    printf("Number before clearing %d bit: %d\n ", n, num);
    printf("Number after clearing %d bit: %d\n ", n, newnum);

    return 0;
}
