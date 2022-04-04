//Write a C program to copy all elements from an array to another array.

#include <stdio.h>
c
int main()
{
   int a[20],b[20],i,n;
   printf("enter the lenght:");

   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("a[%d]:",i);
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       b[i]=a[i];
   }
   for(i=0;i<n;i++)
   {
       printf("%d\t",b[i]);
   }
   return 0;
}
