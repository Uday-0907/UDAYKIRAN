#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if((num & 1) ==0)
	{
		printf("it is even");
	}
	else
	{
		printf("it is a odd");
	}
}
