#include<stdio.h>
float average (int a ,int b,int c);
int main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("the average of a function : %f",average(a,b,c));

return 0;
}
float average (int a ,int b,int c)
{
    float result;
    result = (float)(a+b+c)/3;
    return result ;
}
