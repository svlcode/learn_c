#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a char: ");
  scanf("%c", &ch);

  if (ch >= 65 && ch <= 90)
  {
    ch += 32;
  }
  else if (ch >= 97 && ch <= 124)
  {
    ch -= 32;
  }
  printf("%c", ch);
}