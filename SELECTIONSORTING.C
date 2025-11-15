#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp,min;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("\nEnter elements in Array:");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\nAfter Sorting the Elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
	
}
