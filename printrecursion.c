// program to print the numbers
#include <stdio.h>
void display(int num);
int main()
{
    int n;
    
    printf("enter the no.of terms to be printed\n");
    scanf("%d",&n);
    printf("natural numbers from 1 to %d are\n",n);
    display(n);
    return 0;
}
void display(int num)
{
    if(num)


display(num-1);
else 
return;
printf("%d\n",num);
}
