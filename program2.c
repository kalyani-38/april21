#include <stdio.h>

void main()
{
   int arr[]={1,2,3,4,5,6},i,even=0,odd=0;
   for(i=0;i<6;i++)
   {
     printf("%d\n",i);
     if(arr[i]%2==0){
     printf("even numberis=%d\n",arr[i]);

     }
    else if(arr[i]%2!=0)
     printf("odd numberis=%d\n",arr[i]);

   }
