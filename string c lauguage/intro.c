#include<stdio.h>
int main ()
{
    char str[] = "Akshit";
    char *prt = str;
    
    while (*prt!='\0')
    {
        printf("%c",*prt);
        prt++;
    }
    return 0;
}