#include<stdio.h>
int main()
{

  int no,i,j,k,x,y,dummy1,sum = 0;
  printf("Enter the number to find out the Happy or not");
  scanf("%d",&no);



  while( no > 0 )
  {
    i = no % 10;
    sum = sum + (i*i);
    no = no / 10;
    if( no == 0)
    {
      printf("sum is %d\n",sum);
      if( sum == 1)
      {
        printf("Number is Happy");
	break;
      }
      no = sum;
      sum = 0;
    }
  }
}
