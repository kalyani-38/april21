#include <stdio.h>

int main()
{
    int arr[10],sum,i;
    for(i=0;i<10;i++);
    {
        printf("enter the elements of array[%d]",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum=%d\n",sum);


    return 0;
