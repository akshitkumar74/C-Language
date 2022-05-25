#include<stdio.h>
void wrong_swap (int x, int y);
void swap (int *x,int *y);
int main ()
{
    int x ,y;
    printf("enter the value of x :");
    scanf("%d",&x); 
    printf("enter the value of y :");
    scanf("%d",&y);
printf("The value of x and y is %d and %d\n",x,y);
    swap (&x, &y);
    printf("The swap the x and y is %d and %d\n",x,y);

return 0;
}
void wrong_swap (int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap (int *x,int *y)
{
    int temp;
    temp = *x;
   *x = *y;
   *y = temp;
}