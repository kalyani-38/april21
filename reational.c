//relational operators
#include <stdio.h>

int main()
{
  int a,b;
  printf("enter the values for a and b");
  scanf("%d%d",&a,&b);
  if(a<b)
  printf("%d is less than %d\n",a,b);
  if(a<=b)
  printf("%d less than or eqal to %d\n",a,b);
  if(a==b)
  printf("%d is eqal to %d\n",a,b);
  if(a!=b)
  printf("%d ia not eqal to %d\n",a,b);
  if(a>b)
  printf("%d is greater than %d\n",a,b);
  if(a>=b)
  printf("%d is greter than or equal to %d\n",a,b);
  
    return 0;
}
