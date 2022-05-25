#include<stdio.h>
int main()
{
     int a[10],max,i,min,size;
     printf("enter size of array\n");
     scanf("%d",&size);
     printf("enter the value of array:");

    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
        max = a[0];
        min = a[0];
    for (i=0;i<size;i++)
    {
        if (max<a[i])
        {
        max=a[i];
    }
      if ( min>a[i])
    {
       min=a[i];
    }
    }
      printf("Mximium number = %d\n",max);
      printf("Minimum number = %d\n",min);
   
     return 0;
}