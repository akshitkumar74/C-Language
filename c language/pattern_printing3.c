#include<stdio.h>
int main()
{
      for(int i=1;i<=6;i++)
        {
            for (int j=6-i+1;j>=1;j--)
           {
                printf("*");
            }
                
                    for (int a=1; a<=2*i-1; a++)
                {
                    printf(" "); 
                }
                for (int k=6-i+1;k>=1;k--)
                {
                    printf("*");
                }
                printf("\n");
        }

        }