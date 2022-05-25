#include <stdio.h>

int main() {
   int a=1,i, n;
   printf("enter any limit : ");
   scanf("%d",&n);

   for (i=n;i>=1;i--)
   {
      printf("%d ",a);
      a=a*i;
   }

   
   return 0;
}