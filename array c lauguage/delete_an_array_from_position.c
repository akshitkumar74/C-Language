#include<stdio.h>
int main ()
{
    int a[100],i,n,pos;
    printf("Enter the elemrnt of an array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int num;
    printf("enter the num whose we delete : ");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
     if(num==a[i]){
         pos = i+1;
     }

    }
    if(pos<0 || pos>n)
    {
        printf("Not found.",n);
    }
    else
    {
        for (i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;

        for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    }
    return 0;
}