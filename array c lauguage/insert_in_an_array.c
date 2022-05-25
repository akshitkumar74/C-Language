#include<stdio.h>
int main ()
{
    int pos,arr[100],i,n,loc;
    printf("enter the element array : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("what are you replace from an array: ");
    scanf("%d",&loc);
    printf("enter the element position of an array  : ");
    scanf("%d",&pos);

    
    for (i=n-1;i>=loc;i--)
       arr[i] = arr[i-1] ;
   arr[pos-1]=loc;


    for (i=0;i<n;i++)
    
        printf("%d ",arr[i]);
        printf("\n");
    

     return 0;
}