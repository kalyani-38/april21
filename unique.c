// program to find unique elements  
#include <stdio.h>

int main()
{
    int a[10],i,j,count,n;
    printf("enter the no.of elements in array"); 
    scanf("%d",&n);
    printf("enter the elements in array"); 
    for(i=0;i<n;i++)
    {
     
         scanf("%d",&a[i]);
    }

 for(i=0;i<n;i++)
 {
     count=0;
     for(j=0;j<n;j++)
     {
         if(i!=j)
         {
             if(a[i]==a[j])
             count++;
         }
     }
 }
if(count==0)
{
printf(" %d\t",a[i]);
}
    return 0;
}
