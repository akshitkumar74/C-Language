#include<stdio.h>
int main ()
{
    int a[100],i,n,freq=0,pos;
    printf("Enter the element of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the frequency array : ");
    scanf("%d",&pos);

    for(i=0;i<n;i++)
    {
    if (a[i]==pos)
    {
    freq++;
    }
    }

    printf("Your entered frequency is %d and the frequency of an array %d",pos,freq);

    return 0;
}