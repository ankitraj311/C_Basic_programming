#include<stdio.h>
int main()
{
  int i,j,k,x,y,no,sum=0,dummy;
  printf("Enter the number to find out the palindrom or not");
  scanf("%d",&no);
  dummy = no;






  while( no > 0)
  {
    i = no % 10;
    sum = (sum * 10)  +  i;
    no = no /10;
  }

  if( sum == dummy)
  {
    printf("NNumber is Palindrom");
  }
  else
  {
    printf("Number is not palindrom");
  }
}
