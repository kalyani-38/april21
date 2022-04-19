//Write a C program to toggle nth bit of a number.
#include <stdio.h>

int main()
{
    int num, n, newnum;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &n);
    newnum = num ^ (1 << n);
    printf("Number before toggling %d bit: %d \n", n, num);
    printf("Number after toggling %d bit: %d \n", n, newnum);

    return 0;
}
