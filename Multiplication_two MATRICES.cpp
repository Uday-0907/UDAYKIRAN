#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,k;
	printf("Enter rows and col for A:");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter row and col for B:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("not Valid");
		return 0;
	}
	printf("\nEnter matrix A elements:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Matrix B elements:");
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][i]);
			}
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}



















