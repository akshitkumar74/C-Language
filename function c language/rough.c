#include<stdio.h>
void main()
{
	int a[2][3],b[2][3],c[2][3];
	int i,j;
	printf("Enter the elements of A matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is A:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the elements of B matrix :\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
	}
	printf("matrix is B :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	printf("adding two matrix in another matrix :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}