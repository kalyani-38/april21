//program to find sum of two numers using different ways
#include <stdio.h>
int sum(int x,int y);//function declaration
int main()
{
    int a=10,b=20,s;
    s=sum(a,b);//function call
   printf("%d\n",s);
    s=sum(4,5);
     printf("%d\n",s);
    s=sum(a+b,b*2);
    printf("%d\n",s);
    return 0;
}
int sum(int x,int y) //function defination
{
    int s;
    s=x+y;
    return s;
}
