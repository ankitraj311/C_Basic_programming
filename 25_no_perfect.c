#include<stdio.h>
int main()
{
  int i,j,k,x,y,no,sum=0;
  printf("Enter the number to find out the number is perfect or not");
  scanf("%d",&no);





  for( i=1; i<no; i++)
  { 
    if(no % i == 0)
    {
      sum = sum + i;
    }
  }
  if( no == sum)
  {
    printf("%d is Perfect",no);
  }
  else
  {
    printf("Number is not perfect");
  }
}
