#include<stdio.h>
int main()
{
	char op;
	double first,second;
	printf("enter the operator(+,-,*,/)\n");
	scanf("%c",&op);
	printf("enter two numbers\n");
	scanf("%.1f %.1f",&first,&second);
	switch(op) {
	
	case '+':
		printf("%.1lf+%.1lf=%.1lf",first,second,first+second);break;
    case '-':
    	printf("%.1lf-%.1lf=%.1lf",first,second,first-second);break;
    case '*':
    	printf("%.1lf*%.1lf=%.1lf",first,second,first*second);break;
	case '/':
		printf("%.1lf/%.1lf=%.1lf",first,second,first/second);break;
	default :
		printf("not valid");
	}
		
	return 0;	
}
