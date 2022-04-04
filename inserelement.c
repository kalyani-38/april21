//Write a C program to insert an element in an array.

#include <stdio.h>

int main()
{
    int a[50],i,size,pos,num;
    printf("enter the size of the array:");
    scanf("%d",&size);
    printf("enter the elements of the array:");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
printf("enter tha value to insert:");
scanf("%d",&num);
printf("enter position:");
scanf("%d",&pos);
for(i=size-1;i>=pos-1;i--)
{
    a[i+1]=a[i];
}
a[pos-1]=num;
for(i=0;i<=size;i++)
printf("%d",a[i]);
    return 0;
}
