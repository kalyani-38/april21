//Write a C program to count total number of even and odd elements in an array using macros
#include <stdio.h>
#define SIZE 10
int main()
{
   int a[SIZE]={1,2,3,4,5,6,7,8,9,10},even,odd,i;
   even=odd=0;
   for(i=0;i<10;i++)
   {
       if(a[i]%2==0)
       even++;
       else
       odd++;
     
   }
   printf("even numbers=%d,odd numbers=%d\n",even,odd);
    return 0;
}
