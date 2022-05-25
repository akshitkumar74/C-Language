#include<stdio.h>
int main(){
    char ch = 'A';
    printf("Alphate A - Z is \n");

    while (ch<='Z')
    {
        printf("%c\n",ch);
        ch++;
    }
    return 0;
}