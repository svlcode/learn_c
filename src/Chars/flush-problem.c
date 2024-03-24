#include <stdio.h>

// fflush(stdin) - is not working anymore. this is a better solution:
void clear_buffer()
{
  while (getchar() != '\n')
  {
  };
}

int main()
{
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);

  // after the first scanf there wil enter character left
  // in the input buffer which will  be grabbed by the second
  // scanf, and therefore we will not be able to input our
  // own char

  clear_buffer();

  char ch;
  printf("Enter a char: ");
  // previously: scanf("%c", &ch);
  // by puting a space before %c it will flush the input buffer
  scanf("%c", &ch);

  clear_buffer();

  int j;
  printf("Enter another number: ");
  scanf(" %d", &j);
}