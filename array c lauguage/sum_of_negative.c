#include<stdio.h>
int main ()
{
    int a[100],size,i;
    int postive_count=0,negative_count=0;
    printf("enter the element of array : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]>=0)
        {
            postive_count++;
        }
        else
        {
            negative_count++;
        }
    }
    printf("positive array : %d",postive_count);
    printf("\nnegative array : %d",negative_count);
    
    return 0;
}