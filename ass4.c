// WAP to to revers the array
#include<stdio.h>
int main()
{
    
    int arr[5]={1,2,3,4,5},i,j,temp;
    for(i=0,j=4;i<j;i++,j--)
    
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("after reversing the array is");
    for(i=0;i<5;i++)
    printf("%d",arr[i]);
    printf("\n");
    return 0;
}
