#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int num;
  long int a,reversenum=0;

  printf("Enter the 5 digit number");
  scanf("%d",&num);

  a=num%10;
  num= num/10;
  reversenum=reversenum+a*10000;

  a=num%10;
  num=num/10;
  reversenum=reversenum+a*1000;

  a=num%10;
  num=num/10;
  reversenum=reversenum+a*100;

  a=num%10;
  num=num/10;
  reversenum=reversenum+a*10;

  a=num%10;
  num=num/10;
  reversenum=reversenum+a*1;

  printf("The Number After Reverse is:%d\n",reversenum);

  if( num==reversenum )
    printf("same\n");
  else
    printf("different\n");

  return 0;
}
