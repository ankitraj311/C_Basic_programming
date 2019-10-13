#include<stdio.h>
int main()
{
  int i,j,k,x,y,no,a,b,sum=0;
  printf("Ennter the first and second number to find out the sum");
  scanf("%d%d",&a,&b);







  for(i = a; i<=b; i++)
  {
    if( i%2 == 0)
    {
      sum = sum + i;
    }
  }

  printf("Sum of the even numbers is %d",sum);
}
