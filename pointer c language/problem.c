#include<stdio.h>
void add(int a){
    printf("the addess of a is %u\n",&a);
}
int main ()
{
  int i=5;
  printf("The address of entered variable is %d\n",i);
    add(i);
    printf("the addess of i is %u\n",&i);
}