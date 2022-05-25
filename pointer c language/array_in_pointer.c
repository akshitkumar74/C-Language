#include<stdio.h>
int main ()
{
    int i = 12;
    int *add = &i;
    int *sub = &i;
    int *multi, com;
    printf("Value = %d\n",add);
    add++;
    printf("Add = %d\n",add);
    sub--;
    printf("subtract = %d\n",sub);
    multi = add - sub;
    printf("subtract one pointer to another = %d\n",multi);
    if (add > sub )
    printf("The add is greater than sub"); 
return 0;
}