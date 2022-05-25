#include<stdio.h>
int main ()
{
    int a[10],i;
    int even=0,odd=0; 
    printf("enter any number of array\n");
    for (int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    if (a[i]%2==0)
    even++;

    else
    odd++;
    }
    printf("this array is even %d",even);
    printf("\nthis array is odd %d",odd);

    
    return 0;
}