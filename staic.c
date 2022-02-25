//static
//#include <stdio.h> 
void func(); 
int main()  
{  

func();
func();
func();

return 0;
}
void func()
{
static int x=2,y=5;
printf("x=%d,y=%d",x,y);
x++;
Y++;
}
