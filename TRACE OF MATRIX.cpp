/*#include<stdio.h>
int main()
{
	int a[2][2],t[2][2],i,j;
	printf("Enter elements:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("\nTranspose Matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",t[i][j]);
			
		}
		printf("\n");
	}
}*/

#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("Enter elements in array:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Trace of Elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("%d",sum);
	return 0;
}





















