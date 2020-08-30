#include<stdio.h>
int main()
{
  int i=0, j=0, k=0, no=0, count = 0, frequency[10] = {0}, last;
  printf("Enter Length of array\n");
  scanf("%d",&no);
  int array[no];




  for(i=0; i<no; i++)
  {
    scanf("%d",&array[i]);
    while(array[i] != 0)
    {
      last = array[i] % 10;
      frequency[last]++;
      array[i] = array[i]/10;
    }
  }

  for(j=0; j<10; j++)
  {
    printf("%d -> %d\n",j,frequency[j]);

  }
}

