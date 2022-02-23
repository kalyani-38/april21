// with arguments no return type finding area of traingle
#include <stdio.h>
#include<math.h>
void type(float a, float b,float c);
int main()
{
    
   float a=10,b=20,c=30;
   if(a<b+c && b<a+c && c<a+b)
   {
       type(a,b,c);
       
   }
   else
   printf("no traingle with these sides\n");

    return 0;
}
void type(float a, float b,float c)
{
    int s,area;
    s=a+b+c/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of traingle=%f\n",area);
    
}
