#include<stdio.h>
#include<string.h>
int main ()
{
   int a =5;
   switch (a)
   {
   case 1:printf("FIRST");
   case 2 : printf ("SECOND");
   case 3+2 : printf("THIRD");
   case 5: ("FIRST");
       /* code */
       break;
   

   }
     return 0;
}