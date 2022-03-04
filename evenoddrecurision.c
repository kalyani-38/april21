// program to print the even or odd  numbers using recursion
#include <stdio.h>
void printevenodd(int R,int L);
int main()
{
  int lowerlimit,upperlimit;
  printf("enter lower limit");
  scanf("%d",&lowerlimit);
  printf("enter upperlimit");
  scanf("%d",&upperlimit);
  printf("evenodd numbers from %d to %d are",lowerlimit,upperlimit);
  printevenodd(lowerlimit,upperlimit);
  return 0;
}
void printevenodd(int R,int L)
{
    if(R>L)
    return;
    printf("%d",R);
    printevenodd(R+2,L);
}
