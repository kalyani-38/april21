// Auto
#include<stdio.h>
 int main ( )
{
   auto int i=1;
   printf ("%d\t",i);
   {
      auto int i=2;
      printf ("%d\t",i);
      {
         auto int i=3;
         printf ("%d\t",i);
      }
   }
   return 0;
}
