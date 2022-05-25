#include<stdio.h>
int main ()
{
    int marks[5];
    float avg,sum=0;
    printf("enter the number of student\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg = sum/5;
    printf("the averge marks of a student is %f",avg);
    return 0;
}