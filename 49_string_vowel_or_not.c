#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,k;
  char c;
  printf("Enter Character to find out Vowel/Consonant");
  scanf("%c",&c);



  if( c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
  {
    printf("%c is a Vowel",c);
  }
  else
  {
    printf("Not a Vowel");
  }


}
