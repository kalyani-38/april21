// Q1-printing i+j value is even print 1 else 0
#include <stdio.h>

int main()
{
    int i,j,n;
    printf("enter number of lines:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)//loop for number of lines
  
   {
       for(j=1;j<=i;j++)//loop for number of stars
       if((i+j)%2==0)
            printf("1");
            else
            printf("0");
       
       
        printf("\n");
   }
   
  
    return 0;
}
