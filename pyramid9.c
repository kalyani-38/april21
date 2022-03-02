// Q3
#include <stdio.h>

int main()
{
    int i,j,n=0;
    printf("enter number of lines:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)//loop for number of lines
  
   {
       for(j=1;j<=n+1-i;j++)//loop for number of stars
       
            printf("*");
           
       
       
        printf("\n");
   }
   
  
    return 0;
}
