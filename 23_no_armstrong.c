#include<stdio.h>
int main()
{
  int no, x, y,i,j,dummy=-1,sum=0;
  printf("Enter the number to find out  the palindrom or not");
  scanf("%d",&no);
  dummy = no;





  while( no > 0 )
  {
    i = no % 10;
    sum = sum + (i*i*i);
    no = no / 10;
  }
 
  if ( dummy == sum)
  {
    printf("Number is %d palindrom",dummy);
  }
  else
  {
    printf("Number is %d not palindrom",dummy);
  }

}
