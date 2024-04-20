#include <stdio.h>
#include <math.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool is_prime(int number)
{
  double sqrt_number = sqrt(number);
  for (int i = 2; i < sqrt_number; i++)
  {
    if (number % i == 0)
      return FALSE;
  }
  return TRUE;
}

int main()
{
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (is_prime(number))
  {
    printf("%d is prime", number);
  }
  else
  {
    printf("%d is NOT prime", number);
  }
}