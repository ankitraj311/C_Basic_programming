#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,k, count = 0;
  char str_arr[100], str_arr1[100], f;
  printf("Enter String to convert Upper to Lower & Lower to Upper");
  scanf("%[^\n]s",str_arr);


  
  printf("%s",str_arr);
  for(i=0; str_arr[i] != '\0'; i++)
  {
    if(str_arr[i] == ' ')
    {
      count++;
    }
  }

  printf("Number of Space are %d",count);
}
