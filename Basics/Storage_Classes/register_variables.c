#include <stdio.h>

int main()
{
  register int sum = 0;
  register int count;
  for (count = 0; count < 1000; count++)
  {
    sum += count;
  }

  printf("The sum is %d", sum);
}