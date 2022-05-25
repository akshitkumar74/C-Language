#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
   char str[20];
   printf("Enter any character : ");
   scanf("%s",str);

   printf("Your lowercase character are : ");

   puts(strlwr(str));
   return 0;
}