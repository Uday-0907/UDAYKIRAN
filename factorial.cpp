#include<stdio.h>
int main()
{
int n,i;
long long f=1;
printf("Enter a number:");
scanf("%d",&n);
if(n<0)
{
	printf("invalid");
}
else
{
	for(i=1;i<=n;i++)
	{
		f=i*f;
	}
	printf("factorial of number %d is %lld",n,f);
	
}
return 0;
}
