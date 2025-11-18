#include<stdio.h>
int main()
{
	int n,key;
	printf("enter no of elements in array:");
	scanf("%d",&n);
	printf("enter key value to find:");
	scanf("%d",&key);
	int a[n],found=0,mid,low=0,high=n-1,i;
	printf("enter elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			found+=1;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
		
	}
	if(found==1)
	{
		printf("element founded");
	}
	else {
		printf("element not founded");
	}
	
}
