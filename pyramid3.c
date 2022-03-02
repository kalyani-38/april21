// Q1-printing j value
#include <stdio.h>

int main()
{
    int i,j,n;
    printf("enter number of lines:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)//loop for number of lines
  
   {
       for(j=1;j<=i;j++)//loop for number of stars
       
            printf("%d",j);
       
       
        printf("\n");
   }
   
  
    return 0;
}
