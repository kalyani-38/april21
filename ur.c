// program to print quo and remainder
#include <stdio.h>

int main()
{
   int x,y,quo,rem;
   printf("enter two numbers");
   scanf("%d%d",&x,&y);
   if(y)
   {
       quo=x/y;
       rem=x%y;
       printf("quetient=%d,remainder=%d\n",quo,rem);
       
       
   }
else
printf("divide by zero error\n");


    return 0;
}
