//Write a C program to concatenate two strings using pointers.

#include <stdio.h>
#define MAXSIZE 100

int main()
{
    char str1[MAXSIZE], str2[MAXSIZE];
    char * p1 = str1;
    char * p2 = str2;

    /* Input two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    while(*(++p1))
    while(*(p1++) = *(p2++));

    printf("Concatenated string = %s", str1);

    return 0;
}
