//program small,large
#include <stdio.h>

int main()
{
   int arr[10]={2,5,4,5,6,7,8,9,11,38},large,small,i;
  small=large=arr[0];
   for(i=1;i<10;i++)
  {
      if(arr[i]<small);
   small=arr[i];
   if(arr[i]>large)
   large=arr[i];
   
  }
    printf("smallest=%d,largest=%d\n",small,large);
    return 0;
}
