#include <stdio.h>

void clear_buffer()
{
  while (getchar() != '\n')
  {
  };
}

int main()
{
  char full_name[50];
  printf("Enter your full name: ");
  scanf("%[^\n]", full_name);

  clear_buffer();

  char address[100];
  printf("Enter your address: ");
  scanf("%[^\n]", address);

  printf("Your full name is %s and your address is %s", full_name, address);
}