#include<stdio.h>
void sumandavg(int a, int b, int *sum, float *avg);
int main ()
{
    int a,b,sum;
    float avg;
    a = 4;
    b = 5;
    
    sumandavg( a, b, &sum ,&avg);
    printf("The sum of two numbers : %d\n",sum);
    printf("The average of numbers : %f\n",avg);


return 0;
}
void sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a+b;
    *avg = (float)*sum/2;
}