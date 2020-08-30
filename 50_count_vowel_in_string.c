#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,k, count = 0;
  char str_arr[100];
  printf("Enter Character to find out Vowel/Consonant");
  scanf("%s",str_arr);


  printf("Value of String is %s",str_arr);
  for(i=0; str_arr[i] != '\0'; i++)
  {
    if( str_arr[i] == 'a' || str_arr[i] == 'A' || str_arr[i] == 'e' || str_arr[i] == 'E' || str_arr[i] == 'i' || str_arr[i] == 'I' || str_arr[i] == 'o' || str_arr[i] == 'O' || str_arr[i] == 'u' || str_arr[i] == 'U')
    {
      count++;
    }
  }
  if(count ==  0)
  {
    printf("Not a Vowel");
  }
  else
  {
    printf("%d Vowel are found",count);
  }


}
