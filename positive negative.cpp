#include<stdio.h>
int main ()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	
	if (num>=1)
	printf("%d is a positive integer",num);
	else
	printf("%d is a odd number",num);
	
	return 0;
}