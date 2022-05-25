#include<stdio.h>
int main ()
{
    char a[100],b[100];
    int i=0,j=0;

    printf("Enter the first string :");
    gets(a);
    printf("Enter the second string :");
    gets(b);

    while (a[i]!='\0')
        i++;
    while (b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]!='\0';
    printf("The concatenate of both of the string is %s\n",a);

return 0;
}