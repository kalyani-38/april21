1. assignment question 
// WAP to to input values and print them using pointer
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},i;
    int *ptr=&arr[0];
    
    for(i=0;i<5;i++)
    {
        printf("the array elements are\n");
        for(i=0;i<5;i++)
        printf("%d\t",*(ptr+i));
        
    }
   
    return 0;
}
