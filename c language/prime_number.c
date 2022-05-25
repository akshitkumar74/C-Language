#include<stdio.h>
int main()
{
    int n,i,count;
    printf("enter any number : ");
    scanf("%d",&n);

    for (i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
           count=0;
        }
    }
    if (count){
    printf("This is a prime number");
    }
    else  {
    printf("This is not a prime number");
}
}