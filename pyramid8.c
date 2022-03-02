// Q1-printing n+1-j
#include <stdio.h>

int main()
{
    int i,j,n=0;
    printf("enter number of lines:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)//loop for number of lines
  
   {
       for(j=1;j<=i;j++)//loop for number of stars
       
            printf("%d",n+1-i);
           
       
       
        printf("\n");
   }
   
  
    return 0;
}
