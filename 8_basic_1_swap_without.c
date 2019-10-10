#include<stdio.h>
int main()
{
  int i,j,x=20,y=30;
  x = x + y; 
  y = x - y;
  x = x - y ;
  printf("After swapping numbers, x = %d, y = %d", x, y );
}
