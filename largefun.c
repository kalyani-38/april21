//program to find large numers 
#include <stdio.h>
int large(int x,int y);//function declaration
int main()
{
    int x=12,y=13;
    printf("larger number is %d\n",large(x,y));
    
    
    return 0;
}
int large(int x,int y) //function defination
{
    return x>y?x:y;
}
