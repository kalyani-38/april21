//Write a C program to copy one array to another using pointers
#include <stdio.h>
 
int main()
{
    int arr1[50],arr2[50],*p,*p1,n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
 p=&arr1;
 p1=&arr2;
    printf("Enter elements in array:\n");
    for (i = 0; i < n; i++)
    {
        printf("enter elements in p[%d]",i);
        scanf("%d", &*(p+i));
    }
 
    printf("Entered array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t ",*(p+i));
    }
     for (i = 0; i < n; i++)
     {
         *(p1+i)=*(p+i);
     }
     printf("after copy of array elements using pointer: ");
     for(i = 0 ; i < n ; i++)
     {
         printf(" %d\t ",*(p1+i));
     }
 
    return 0;
}
