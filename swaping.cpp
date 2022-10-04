#include<stdio.h>  
 int main()    
{    
int a,b; 
printf("enter a value:");
scanf("%d",&a);
printf("enter b value:");
scanf("%d",&b);     
printf("Before swap a=%d b=%d",a,b);      
a=a+b;  
b=a-b;  
a=a-b;    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   
