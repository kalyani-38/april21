// program to find frequency of  an element 
#include <stdio.h>

int main()
{
    int a[10],freq=0,key,i;
    for(i=0;i<10;i++)
    {
        printf("enter elements in array"); 
         scanf("%d",&a[i]);
    }

    
printf("enter the number to find frequency ");
scanf("%d",&key);
 for(i=0;i<10;i++)
if(a[i]==key)
freq++;
    printf("frequency of %d is %d",key,freq);
    return 0;
}
