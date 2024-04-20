#include <stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool is_prime(int number)
{
  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
      return FALSE;
  }
  return TRUE;
}

int main()
{
  int numbers[] = {4, 5, 8, 7, 2, 11, 10, 14, 17};

  int first_prime_position = -1;
  int last_prime_position = -1;
  for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
  {
    if (is_prime(numbers[i]))
    {
      if (first_prime_position == -1)
      {
        first_prime_position = i;
      }
      last_prime_position = i;
    }
  }

  printf("Maximum prime distance is %d", last_prime_position - first_prime_position);
}