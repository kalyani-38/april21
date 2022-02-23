//assignement Q2
// WAP to to copy of one array elment to the other array using pointer
#include<stdio.h>
int main()
{
    
    int arr1[]={1,2,3,4,5},length,i;
    
    length=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[length];
    int *p1=&arr1[0];
    int *p2=&arr2[0];
    
    for(i=0;i<length;i++)
    {
        arr2[i]=arr1[i];
    }
    
    printf("elements of original arr\n");
    for(i=0;i<length;i++)
    {
        printf("%d",*(p1+i));
        
    }
    printf("\n");
    printf("elements of new arr\n");
    for(i=0;i<length;i++)
    {
        printf("%d",*(p2+i));
        
        
    }
    return 0;
}
