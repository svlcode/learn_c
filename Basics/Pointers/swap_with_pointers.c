#include <stdio.h>

// a = 0 1 0 1
// b = 0 0 1 1
// a = a XOR b

// a = 0 1 1 0
// b = 0 0 1 1
// b = b XOR a

// a = 0 1 1 0
// b = 0 1 0 1
// a = a XOR b

// a = 0 0 1 1
// b = 0 1 0 1
void swap(int *a, int *b)
{
  if (a != b)
  { // Avoid unnecessary swap if the addresses are the same
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
  }
}

int main()
{
  int x = 100, y = 200;
  printf("x = %d, y = %d\n", x, y);
  printf("swapping...\n");
  swap(&x, &y);
  printf("x = %d, y = %d\n", x, y);
}
