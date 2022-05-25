#include<stdio.h>
int main()
{
    int si,p,r,t;
    printf("Enter the value of p : ");
    scanf("%d",&p);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    printf("Enter the value of t : ");
    scanf("%d",&t);

    si=(p*r*t)/100;
     printf("\nThe value of simple interst = %d\n",si);

     return 0;
}