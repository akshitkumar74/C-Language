#include<stdio.h>
int main ()
{
   int multi[10];
   int n,i;
   printf("Enter any number :");
   scanf("%d",&n);

   for ( i=0;i<10;i++)
   {
       multi[i]=n*(i+1);
   }
   for ( i=0;i<10;i++)
   {
       printf("%d X %d = %d\n",n,i+1,multi[i]);
   }

return 0;
} 