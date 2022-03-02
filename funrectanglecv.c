// to fing area of rectangle using functions call by value
#include<stdio.h>
int find_area(int,int);
int main()
{
     int l,b;
    printf("enter lenght and bredth of the rectangle");
    scanf("%d%d",&l,&b);
    find_area(l,b);
    
}
int find_area(int l,int b)

{
    
   int area=l*b;
    printf("area of the rectangle is %d",area);
    return 0;
}
