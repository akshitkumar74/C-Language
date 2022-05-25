#include<stdio.h>
int main ()
{
    int n,sum=0,i;
    printf("enter any number : ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if (sum==n)
    {
        printf("this is a perfect number");
    }
    else 
    {
        printf("this is not a perfect number");
    }

   return 0;
}

