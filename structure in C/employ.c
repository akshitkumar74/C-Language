#include<stdio.h>
struct employ
{
    int code;
    float salary;
    char name[10];
};

int main ()
{
    struct employ e1,e2,e3;
    printf("Enter the code of a employ : ");
    scanf("%d",&e1.code);
    printf("Enter the salary of a employ : ");
    scanf("%f",&e1.salary);
    printf("Enter the name of a employ : ");
    scanf("%s",e1.name);
    printf("Enter the code of a employ : ");
    scanf("%d",&e2.code);
    printf("Enter the salary of a employ : ");
    scanf("%f",&e2.salary);
    printf("Enter the name of a employ : ");
    scanf("%s",e2.name);
return 0;
}