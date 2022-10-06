#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 1st number:");
	scanf("%d",&a);
	printf("enter 2nd number:");
	scanf("%d",&b);
	printf("enter 3rd number:");
	scanf("%d",&c);
	
	if (a>b & a>c)
	{
		printf("%d is largest number",a);
	}
	else if (b>a & b>c)
	{
		printf("%d is largest number",b);
	}
	else
	{
		printf("%d is largest number",c);
	}
	return 0;
}
