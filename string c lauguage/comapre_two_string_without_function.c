#include<stdio.h>
int main ()
{
   char a[100],b[100];
   int i=0,c=0;

   printf("Enter the first string : ");
   gets(a);
   printf("Enter the second string : ");
   gets(b);

     while (a[i] == b[i] && a[i] != '\0')
      i++;
   if (a[i] > b[i])
      printf("A > B");
   else if (a[i] < b[i])
      printf("A < B");
   else
      printf("A = B");

return 0;
}