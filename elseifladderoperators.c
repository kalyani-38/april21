// program for else if ladder using operators
#include <stdio.h>

int main()
{
  float m1,m2,m3,m4,total,per;
  char grade;
  printf("enter the marks of 4 subjects");
  scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
  total=m1+m2+m3+m4;
  per=total/4;
  if(per>=85)
  grade='A';
  if(per<85 && per>=75)
   grade='B';
   if(per<75 && per>=55)
    grade='C';
    if(per<55 && per>=40)
     grade='D';
     if(per<40)
      grade='E';

  printf(" the percentage %f,grade %c\n",per,grade);
   return 0;
   }
