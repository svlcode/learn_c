#include <stdio.h>

void function(int n)
{
  int array[n]; // VLA, allocated on the stack
  for (int i = 0; i < n; i++)
  {
    array[i] = i;
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main()
{
  int n;
  printf("enter the number of elements: ");
  scanf("%d", &n);

  function(n); // Allocate an array of n ints on the stack
  return 0;
}