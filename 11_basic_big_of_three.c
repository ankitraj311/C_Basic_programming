#include<stdio.h>
int main()
{
  
  int i,j,k,n;
  printf("ENter the three number to find out the largest one");
  scanf("%d%d%d",&i,&j,&k);
  





  if(i>j&&i>k)
  {
    printf("%d Lagrest number",i);
  }
  else if(j>i&&j>k)
  {
    printf("%d Lagest number",j);
  }
  else
  {
    printf("%d Largest numbers",k);
  }
}
