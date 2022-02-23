// WAP to to input values and print them
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5},i;
    for(i=0;i<5;i++)
    {
        printf("the array elements are\n");
        for(i=0;i<5;i++)
        printf("%d\t",arr[i]);
        
    }
    printf("\n");
    return 0;
}
