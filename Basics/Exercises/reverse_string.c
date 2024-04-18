#include <stdio.h>
#include <string.h>

void reverse_string(char *str, int size)
{
  for (int i = 0; i < size / 2; i++)
  {
    char tmp = str[i];
    str[i] = str[size - 1 - i];
    str[size - 1 - i] = tmp;
  }
}

int main()
{
  printf("Enter a string: ");
  char str[80];
  scanf("%s", str);
  char str_reverse[80];
  strcpy(str_reverse, str);

  reverse_string(str_reverse, strlen(str_reverse));

  printf("'%s' reversed is %s", str, str_reverse);
}