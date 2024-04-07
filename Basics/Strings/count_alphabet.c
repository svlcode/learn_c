#include <stdio.h>
#include <ctype.h>

int get_alphabet_count(const char *str)
{
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (isalpha(str[i]))
      count++;
  }
  return count;
}

int main()
{
  char str[80];
  printf("Enter a string: ");
  scanf("%[^\n]", str);

  int alphabet_count = get_alphabet_count(str);
  printf("The number of alphabet characters in the string entered is %d", alphabet_count);
}
