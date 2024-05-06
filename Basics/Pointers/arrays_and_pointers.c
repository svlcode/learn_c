#include <stdio.h>

void printArray(int *p_array, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%4d", *(p_array + i));
  }
}

int main()
{
  int x[] = {10, 20, 30, 40, 50};

  // x+i = address of the i-th element
  // *(x+i) = value at address x+i

  printf("x[0] = %d\n", *x);
  printf("address of x[0] = %p\n", x);

  printf("x[1] = %d\n", *(x + 1));
  printf("address of x[1] = %p\n", (x + 1));

  printf("x[2] = %d\n", *(x + 2));
  printf("address of x[2] = %p\n", (x + 2));

  printf("printing the array: \n");
  printArray(x, sizeof(x) / sizeof(int));
}