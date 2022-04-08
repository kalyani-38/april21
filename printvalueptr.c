//Write a C program to input and print array elements using pointer.
#include <stdio.h>
 
int main()
{
    int arr[5];
    int i;
    int * ptr = arr;
 
    printf("Enter elements in array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;
 
    printf("Entered array elements are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
 
    return 0;
}
