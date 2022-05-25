#include<stdio.h>
int main ()
{
int i = 54;
int *prt;
int **prtt;

 prt = &i;
 prtt = &prt;

 printf("\nThe value of pointer to pointer is %d\n",**prtt);
return 0;
}