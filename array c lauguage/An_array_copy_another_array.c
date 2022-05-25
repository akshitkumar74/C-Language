#include<stdio.h>

int main()
{
 int i, n, a[20], b[20];
  
 printf("\n Please Enter the Array Size : ");
 scanf("%d", &n);
 
 printf("\n Please Enter the Array Elements \n");
 for(i = 0; i < n; i++)
  {
     scanf("%d", &a[i]);
   
  }
  
 for(i = 0; i < n; i++)
  {
    b[i] = a[i];
   
  }

 printf("\n Elements of Second Array are: \n");
 for(i = 0; i < n; i++)
  {
    printf("\n Value Inside Array b[%d] = %d", i, b[i]);
  }
 
return 0;
}