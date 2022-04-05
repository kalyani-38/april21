//length of the string
#include <stdio.h>
#include <string.h>
int main()
{
    int count=0;
    char name[30];
    printf("enter name");
    gets(name);
    count=strlen(name);
    printf("string lenght is %d",count);
    puts(name);
    return 0;
}
