#include <stdio.h>
int func();
int main()
{
    printf("%d\n",func());
    return 0;
}
int func()
{
    int sum=0,num;
    for(num=1;num<=25;num++)
    {
    if(num%2!=0)
    sum+=num*num;
    }
    return sum; 
}
