#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,k, count = 0;
  char str_arr[100];
  printf("Enter Character to find out Vowel/Consonant");
  scanf("%s",str_arr);


  for(i=0; str_arr[i] != '\0'; i++)
  {
    count++;
  }
  if(count ==  0)
  {
    printf("No String Found");
  }
  else
  {
    printf("Length of String is %d",count);
  }


}
