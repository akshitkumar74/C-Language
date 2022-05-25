#include<stdio.h>
int main ()
{
    int n,r,i=0,c;
    printf("enter any number : ");
    scanf("%d",&n);
    c=n;

    while (n>0)
    {
        r=n%10;
        i=r*r*r+i;
        n=n/10;

    }
    if (c==i)
    {
        printf("armstrong number");
    }
    else
    {
        
        printf("Not an armstrong number");
    }
   return 0;
}
