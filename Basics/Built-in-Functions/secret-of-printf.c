#ifdef PRINTF_SECRET

#include <stdio.h>

int main()
{
  // printf returns the number of characters printed.
  int number_of_chars = printf("Viorel\n");
  printf("%d characters printed", number_of_chars);

  printf("\n");

  // the inner printf will be executed first
  printf(" (%d characters printed)", printf("Hello World"));
}

#endif // PRINTF_SECRET