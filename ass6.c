#include <stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,7,8,9,6,10},count;
    int i,*p=a,n;
    for(i=0;i<10;i++)
    scanf("%d",(p+i));
    printf("enter your element");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n==*(p+i))
        {
            count=i;
            break;
        }
        printf("d is found at %d position",n,count+1);
        
    }
    

    return 0;
}
  
    
    
