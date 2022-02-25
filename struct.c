//
#include <stdio.h>
typedef struct student

{
    char name[20];
    int age;
}stud;
int main()
{
stud s1;
printf("student name\n");
scanf("%c",&s1.name);
printf("age of the student\n");
scanf("%d",&s1.age);
    return 0;
}
