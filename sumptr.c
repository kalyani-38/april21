//program to find sum of two numers using pointers
#include <stdio.h>
int sum(int *x,int *y);
int main()
{
    int a=10,b=20,s;
    s=sum(&a,&b);
    printf("sum of %d and %d is=%d\n",a,b,s);
    return 0;
}
int sum(int *x,int *y)
{
    int s;
    s=*x+*y;
    return s;
}
