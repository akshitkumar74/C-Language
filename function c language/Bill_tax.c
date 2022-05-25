#include<stdio.h>
int total(float amount);
int main ()
{
   int charge ;
   float amount;
   printf("Enter the amount of a meals : ");
   scanf("%f",&charge);
   printf("The bill of your meals :  %f",total(amount));
   return 0;
}

 int total(float charge, float amount)
{
    float tip = 0.15;
    float tax = 0.2;
    amount = charge+tip+tax;
    return amount;
}