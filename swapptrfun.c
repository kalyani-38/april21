// program function
#include<stdio.h>
int fun(int *x,int *y);
int main(){
    int a=2,b=5;
    printf(" content of a is %d\n",a);
    printf(" content of b is %d\n",b);
    fun(&a,&b);
    printf("%p\n %d\n %u\n ",&a, a,a) ;
    printf("%p\n %d\n %u\n",&b,b,b) ;
    
}
int fun(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
    printf("%p\n %d\n %u\n ",&x, *x,x) ;
    printf("%p\n %d\n %u\n",&y,*y,y) ;
}
