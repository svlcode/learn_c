#ifdef SCANF_SECRET

#include <stdio.h>

int main()
{
  int x, y, i;

  printf("Enter two numbers: ");

  // returns the number of items read
  i = scanf("%d %d", &x, &y);

  printf("x = %d, y = %d, i = %d", x, y, i);
}

#endif // SCANF_SECRET