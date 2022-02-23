 //assignment Q3
// WAP to to revers the array using pointer
#include<stdio.h>
int main()
{
    
    int arr[5]={1,2,3,4,5},i,j,temp;
    int *p=&arr[0];
    for(i=0,j=4;i<j;i++,j--)
    
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("after reversing the array is");
    for(i=0;i<5;i++)
    printf("%d",*(p+i));
    printf("\n");
    return 0;
}
    
