/Write a C program to find length of string using pointers
#include <stdio.h>

int main()
{
    int count=0;
    char name[30],*ptr;
    printf("enter name");
    gets(name);
    ptr=name;
    while(*ptr!='\0')
    {
        count++;
        ptr++;
    }
    printf("%d",count);

    return 0;
}
