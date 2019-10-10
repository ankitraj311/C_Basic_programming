#include<stdio.h>
int main()
{

  int i,j,n;
  printf("Enter the number you want to find out the odd number");
  scanf("%d",&n);



  for(i=0; i<n; i++)
  {
    if(i%2 != 0)
    {
      printf("%d is odd\n",i);
    }
    else
    {
      printf("%d is even\n",i);
    }
  }
}
