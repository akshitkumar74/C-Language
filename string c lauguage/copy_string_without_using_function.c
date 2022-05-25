#include<stdio.h>
int main ()
{
    char a[100],b[100];
    int i;

    printf("Enter the string : ");
    gets(a);

    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';

    printf("Original string = %s\n",a);
    printf("Copy string = %s\n",b);
return 0;
}