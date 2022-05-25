#include<stdio.h>
int fab (int n);
int main ()
{
  int n,fabo;0
  printf("Enter the number : ");
  scanf("%d",&n);
  fabo=fab(n);
  printf("fabonacii of the num %d = %d\n",n,fabo);
return 0;
}
int fab (int n)
{
    int a=0,b=1,c,i;
    for (i=1;i<n;i++)
    {
        printf("The sequence whose fabonacii print %d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
      return a;
}