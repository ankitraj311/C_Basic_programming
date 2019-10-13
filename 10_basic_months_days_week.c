#include<stdio.h>
int main()
{



  int n,i,j, years, weeks,days;
  printf("Enter the number to find out the month, week, days");
  scanf("%d",&n);
  


  years = (n/365);
  weeks = ((n%365)/7); 
  days = ((n%365)%7);
  printf("Total number of years = %d weeks = %d days = %d", years, weeks, days);

}
