#include<stdio.h>
int main()
{
  
  int i,j,k,x,y,sum=0;
  printf("Enter the number to find the sum upto it");
  scanf("%d",&x);






  for(i=0; i<x; i++)
  {
    sum = sum + i;
  }
  printf("Sum upto %d is %d",x,sum);
}
