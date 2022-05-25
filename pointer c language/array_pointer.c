#include<stdio.h>
int main ()
{
int arr[10];
int *prt = arr;
   prt = prt+2;

if (prt==&arr[2])
{
    printf("This pointer array points the location of a memory\n");
}
else
{
    printf("This is not pointer array points the location of a memory\n");
}

return 0;
}