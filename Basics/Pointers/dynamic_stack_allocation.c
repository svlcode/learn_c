#include <stdio.h>
#include <stdlib.h>

void function(int n)
{
  int *array = (int *)alloca(n * sizeof(int)); // Allocate on the stack
  for (int i = 0; i < n; i++)
  {
    array[i] = i;
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
  // Memory allocated with alloca is automatically freed when the function that called alloca returns.
}

int main()
{
  function(1000); // Allocate an array of 1000 ints on the stack
  return 0;
}