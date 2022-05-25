#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[10000],n,i,small,large;
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    
    for (i=1;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
        printf("the largest element of an array.%d",large);
    
     small=a[0];
    
    for (i=1;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
        printf("\nthe smallest element of an array.%d",small);
    
    
    
    return 0;
}
