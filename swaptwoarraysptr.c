//Write a C program to swap two arrays using pointers
#include <stdio.h>
 
int main()
{
    int a[10],b[10],*p1,*p2,i,temp;
    printf("\nenter 10 elements of first array:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("\nenter 10 elements of second array:");
    for(i=0;i<10;i++)
    scanf("%d",&b[i]);
    p1=a;
    p2=b;
     for(i=0;i<10;i++)
     {
         temp=*p1;
         *p1=*p2;
         *p2=temp;
         p1++;
         p2++;
         
         
     }
    for(i=0;i<10;i++)
    {
        printf("\n%d %d",a[i],b[i]);
    }
    return 0;
}
