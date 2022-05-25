#include<stdio.h>
int main()
{
    int sum=0,i,n;
    printf("Enter Any number : ");
    scanf("%d",&i);

    for (i=0;i<=n;i=i+2)
    {
        if ( i%2==0)
        
            sum=sum+i;
    }
    printf("sum = %d",sum);
    return 0;
}