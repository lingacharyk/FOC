#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 1st number:");
	scanf("%d",&a);
	printf("enter 2nd number:");
	scanf("%d",&b);
	
	c = (a+b);
	{
		printf("sum is %d\n",c);
	}
	
	c = (a-b);
	{
		printf("sub is %d\n",c);
	}
	
	c = (a*b);
	{
		printf("mul is %d\n",c);
	}
	c = (a/b);
	{
		printf("divd is %d\n",c);	
	}
	c = (a%b);
	{
		printf("rem is %d\n",c);
	}
	return 0;
	
	
}