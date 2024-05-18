#include <stdio.h>

int main()
{
  int x[] = {1, 3, 5};
  int y[] = {2, 4, 6};

  // value of pointer is constant
  const int *p = x;
  // this means that I cannot do this: *p = 5;

  p = y;

  printf("*p = %d\n", *p);
  printf("*(p+1) = %d\n", *(p + 1));

  // the value of the pointer itself is a constant
  int *const q = x;
  // this means that I cannot do this: q = y, but I can do this:
  *q = 9;

  printf("*q = %d\n", *q);
  printf("*(q+1) = %d\n", *(q + 1));
}