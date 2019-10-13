#include<stdio.h>
int main()
{
  int i,j,k,x,y,sum=0;
  printf("Enter the number to find out the reverse of a nuumber is ");
  scanf("%d",&x);







  while( x > 0)
  {
    i = (x % 10);
    sum = (sum * 10) + i;
    printf("Sum is %d\n",sum);
    x = x / 10;
  }

  printf("Reverse is %d",sum);

}
