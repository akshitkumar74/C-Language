#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
   char str[20];
   printf("Enter any character : ");
   scanf("%s",str);

   printf("Your Uppercase character are : ");
   puts(strupr(str));
   return 0;
}