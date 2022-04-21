//Write a C program to copy one string to another using pointers
#include <stdio.h>   
#define MAXSIZE 100 

int main()
{
    char s1[MAXSIZE], s2[MAXSIZE];
    char * ptr1 = s1;
    char * ptr2 = s2;
    printf("Enter any string: ");
    gets(s1);
    while(*(ptr2++) = *(ptr1++));

    printf("First string = %s\n", s1);
    printf("Second string = %s\n", s2);

    return 0;
}
