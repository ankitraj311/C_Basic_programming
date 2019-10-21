#include<stdio.h>
int main()
{
  int i,j,k,x,y,no,count=0;
  printf("Enter the number to frind out prime or  not");
  scanf("%d",&no);






  for(i=1; i<=no/2; i++)
  {
    if( no%i == 0)
    {
      count++;
    }
  }
  if(count == 1)
  {
    printf("Number %d prime",no);
  }
  else
  {
    printf("Number %d not prime",no);
  }
}
