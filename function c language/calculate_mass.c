#include<stdio.h>
float force(float mass);
int main ()
{
    int m;
    printf("Enter the value of mass : ");
    scanf("%d",&m);
    printf("Mass = %f",force(m));

return 0;
}
float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;

}