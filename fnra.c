//function with no arguments no retun value
#include <stdio.h>
void displaymenu();
int main()
{
    int choice;
    displaymenu();
    printf("enter your choice");
    scanf("%d",&choice);
    return 0;
}
void displaymenu()
{
    printf("1.creat database\n");
    printf("2.insert new record\n");
    printf("3.modify record\n");
    printf("4.delete record\n");
    printf("5.display all records\n");
    printf("6.exit\n");
}
