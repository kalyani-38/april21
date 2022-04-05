/* Counting Vowels and Consonants in a String */
#include <stdio.h>
int main()
{
    char str[50];
    int i,vowels=0,consonants=0;
    printf("enter srting\n");
scanf("%d",&str);
    while(str[i]!='\0')
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vowels++;
        else
        consonants++;
        i++;
    }
    printf("vowwls in the srting=%d\n",vowels);
    printf("consonats in the srting=%d\n",consonants);
    return 0;
}
