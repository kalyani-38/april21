// Q1-printing p++ 
#include <stdio.h>

int main()
{
    int i,j,n,p=0;
    printf("enter number of lines:");
    scanf("%d",&n);
   for(i=1;i<=n;i++)//loop for number of lines
  
   {
       for(j=1;j<=i;j++)//loop for number of stars
       
            printf("%3d",p++);
           
       
       
        printf("\n");
   }
   
  
    return 0;
}
