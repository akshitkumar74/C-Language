#include<stdio.h>
int fact (int n);

  
int main ()
{
    int a;
    printf("Enter any function :");
    scanf("%d",&a);
   printf("The value of factorial %d is %d",a,fact (a));
return 0;
}

int fact (int n)
{
    int f;
    if (n==1 || n==0)
{
    return 1;
}
else {

    f = n*fact(n-1);
    return f;
}
}