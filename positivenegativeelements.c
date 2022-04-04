//Write a C program to count total number of positive and negative elements and zero in an array using macros
#include <stdio.h>
#define SIZE 10
int main()
{
   int a[SIZE]={1,0,0,-4,5,-6,7,8,-9,10},p,n,z,i;
   p=n=z=0;
   for(i=0;i<10;i++)
   {
       if(a[i]>0)
       p++;
       else if(a[i]<0)
       n++;
       else
       z++;
     
   }
   printf("positive numbers=%d\n negative numbers=%d\n zero numbers=%d\n",p,n,z);
    return 0;
}
