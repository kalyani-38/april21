// program to delet an element at specified position
#include <stdio.h>

int main()
{
    int a[50],size,pos,i;
    printf("enter size of array");
    scanf("%d",&size);
    printf("enter elements in array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
printf("enter the position you want to delet");
scanf("%d",&pos);



    for(i=pos;i<size-1;i++)
{
a[i]=a[i+1];
}
for(i=0;i<size-1;i++)
{
    printf("%d",a[i]);
}
    return 0;
