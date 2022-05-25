#include<stdio.h>
int power(int n);
int main ()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("The power of a integer is %d",power(n));
}
int power(int n)
{
    int power;
    power = n*n;
    return power;
}
