// Q4
#include <stdio.h>

int main()
{
    int i,j,n=0;
    printf("enter number of lines:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)//loop for number of lines
  
   {
       for(j=1;j<=n;j++)//loop for number of stars
       
           if(j<i)
           printf(" ");
       else
       
          printf("*"); 
       
   
            
       
        printf("\n");
   }
   
  
    return 0;
}
