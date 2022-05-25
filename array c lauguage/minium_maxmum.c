#include<stdio.h>
int main ()
{
    int a[100],i,max,min;
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for (i=0;i<5;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if (a[i]<min)
        {
            min=a[i];
        }

        
    }
        printf("%d is array is maximum",max);
        printf("\n%d is array of minimum",min);
    return 0;
}

