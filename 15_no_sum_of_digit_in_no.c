#include<stdio.h>
int main()
{
  int i,j,k,no,sum = 0;
  printf("Enter the number, to find the sum of the digit");
  scanf("%d",&no);






  while(no > 0)
  {
    i = no % 10;
    sum = sum + i;
    no = no / 10; 
  }
  printf("Sum of the digit of the number is %d",sum);
}
