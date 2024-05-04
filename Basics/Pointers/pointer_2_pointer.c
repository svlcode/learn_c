#include <stdio.h>

int main()
{
  int x = 10;

  // this is a pointer to x
  int *p0 = &x;
  int **p1 = &p0;

  printf("x = %d\n", x);
  printf("address of x = %p\n", &x);

  printf("\n");

  // The size of the pointers in a 64 bit OS is 64 bits (or 8 Bytes)
  printf("sizeof(&x) = %d Bytes\n", sizeof(&x));
  printf("sizeof(&p0) = %d Bytes\n", sizeof(p0));
  printf("p0 = %d\n", p0);
  printf("value of *p0 = %d\n", *p0);
  printf("address of &p0 = %d\n", &p0);

  printf("\n");

  printf("p1 = %d\n", p1);
  printf("value of *p1 = %d\n", *p1);
  printf("value at address of value at address stored in p1 (**p1) = %d\n", **p1);
  printf("address of &p1 = %d\n", &p1);

  printf("\n");

  int *p2 = *p1;

  printf("p2 = %d\n", p2);
  printf("value at address stored in p2 (*p2) = %d\n", *p2);
  printf("address of &p0 = %d\n", &p2);

  printf("\n");
}