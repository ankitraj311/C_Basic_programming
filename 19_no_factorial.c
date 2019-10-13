#include<stdio.h>
int main ()
{
	int i,j,k,x,y,fact=1;
	printf("Enter the number to find out the factorial of a number");
	scanf("%d",&x);
	
	
	
	
	
	
	for(i=x; i>1; i--)
	{
	  fact = fact * i;
	}
	printf("factorial of number is %d",fact);
}
