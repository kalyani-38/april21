//Write a C program to display  numbers from 1 to n using recursion.
#include <stdio.h>
 void display(int num)

{
    if(num)
    display(num-1);
    else
    return;
    printf("%d\n",num);
}
int main()
{
    int limit;
    printf("enter the number of terms to be printed\n");
    scanf("%d",&limit);
    display(limit);
    return 0;
    
    
}
