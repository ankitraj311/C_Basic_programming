#include<stdio.h>
int main()
{
  int i,j,k,x,y,no,a=0,b=1,c;
  printf("Enter the number to find the fibonaci series");
  scanf("%d",&no);






    printf("Numbers are %d %d",a,b);
    for( i=0; i<no-2; i++)
    {
      c = a + b;
      a = b;
      b = c;
      printf(" %d",c);
    }

}
