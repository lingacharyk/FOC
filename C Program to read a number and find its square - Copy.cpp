#include<stdio.h>
int main()
{
	int num,square;
	printf("enter a number to be converted into square:");
	scanf("%d",&num);
	
	square = (num*num);
	{
		printf("%d square is",num,square);
	}
	return 0;
}