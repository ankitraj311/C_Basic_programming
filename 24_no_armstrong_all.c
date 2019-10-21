#include<stdio.h>
int main()
{
  int no, x, y,i,j,dummy1=0,dummy2=0,sum=0;
  printf("Enter the number to find out  the palindrom or not");
  scanf("%d",&no);






  for(i=1; i<=no; i++)
  {
    sum = 0;
    dummy1 = i;
    dummy2 = i;
    while( dummy1 > 0)
    {
      j = dummy1 % 10; //j should be some unused variable.
      sum = sum + (j*j*j);
      dummy1 = dummy1 / 10;
    }
    if (sum == dummy2)
    {
      printf("%d ",sum);
    }
  }
}
