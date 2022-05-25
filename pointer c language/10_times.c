#include<stdio.h>
int ten_times(int *a);
int main ()
{
    int a=7;
    int c;
    c= ten_times(&a);
    printf("The value of variable of ten times of a number is %d",c);

}
int ten_times(int *a)
{
    int c;
    c= 10*(*a);
    return c;
}