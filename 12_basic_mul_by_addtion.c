#include<stdio.h>
int main()
{
  int a,b,mul = 0, large = 0, small = 0, i=0;
  
  printf("Enter the number to find out the multiplication by Addition");
  scanf("%d%d",&a,&b);
  
  
  
  
  
  if(a>b)
  { 
    large = a;
    small = b;
  }
  else
  {
    large = b;
    small = a;
  }
  for(i=1;i<=large;i++)
  {
    mul = mul + small;
  }
  printf("Sum is %d", mul);
}
