#include <stdio.h>

// There are three functions in C which are used to manage dynamic memory allocation
// These are: malloc, calloc, realloc and they are included in stdlib.h
#include <stdlib.h>

int main()
{
  int *p;
  int n;
  printf("How many integers: ");
  scanf("%d", &n);

  // malloc allocates memory for an array of n integers;
  p = (int *)malloc(n * sizeof(int));
  free(p);
  // calloc allocates memory for an array of n integers and initilizes the memory with zero;
  p = (int *)calloc(n, sizeof(int));

  if (p == NULL)
  {
    printf("Unable to allocate memory\nExisting the program\n");
    exit(1);
  }

  for (int i = 0; i < n; i++)
  {
    printf("Enter number: ");
    scanf("%d", p + i);
  }

  for (int i = 0; i < n; i++)
  {
    printf("*(p + %d) = %d\n", i, *(p + i));
    // I can also use
    printf("p[%d] = %d\n", i, p[i]);
  }

  int new_size = n + 3;
  // realloc retains the previouly allocated memory but with a new size;
  p = (int *)realloc(p, new_size * sizeof(int));
  if (p == NULL)
  {
    printf("Unable to allocate memory\nExisting the program\n");
    exit(1);
  }

  *(p + n) = 10;
  *(p + n + 1) = 22;
  *(p + n + 2) = 33;

  printf("\nPrinting increased array:\n");

  for (int i = 0; i < new_size; i++)
  {
    printf("p[%d] = %d\n", i, p[i]);
  }
}