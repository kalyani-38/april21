#include <stdio.h>
#define SIZE 5
int main()
{
   const int arr[SIZE]={11,22,33,44,55};
  int large,s_large,i;
    large=s_large=arr[0];
    for(i=0;i<5;i++)
    
    {
        if(arr[i]>large){
        s_large=large;
        large=arr[i];
    }   
        else if(arr[i]>s_large){
        s_large=arr[i];
    }
}
    printf("second large element is %d\n",s_large);

    return 0;
