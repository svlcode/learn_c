#include <stdio.h>

int stringLength(const char *str)
{
  int length = 0;
  while (str[length] != '\0')
  {
    length++;
  }
  return length;
}

int main()
{
  char name[] = "Viorel Slaniceanu";

  int length = stringLength(name);

  printf("The length of %s is %d", name, length);
}