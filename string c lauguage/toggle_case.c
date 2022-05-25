#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
   char str[20];
   printf("Enter any toggle case : ");
   scanf("%s",str);

   for (int i=0;str[i]!='\0';i++)
   {
       if (str[i]>='a' && str[i]<='z')
       {
           str[i]=str[i]-32;
       }
       else if (str[i]>='A' && str[i]<='Z' )
       {
          str[i]= str[i]+32;
       }
   }
       printf("the toggle case of a character : %s",str);

   return 0;
}