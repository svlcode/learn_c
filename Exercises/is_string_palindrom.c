#include <stdio.h>
#include <string.h>

int is_palindrome(const char *str)
{
  printf("length of %s is %d\n", str, strlen(str));
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++)
  {
    if (str[i] != str[length - 1 - i])
      return 0;
  }
  return 1;
}

int main()
{
  char str[80];
  printf("Enter a string: ");
  scanf("%[^\n]", str);

  short is_bool = is_palindrome(str);
  printf("%s is %s", str, is_bool == 1 ? "palindrome" : "NOT a palindrome");
}