#include <stdio.h>

void test(int *p2)
{
  printf("*p2 = %d\n", *p2);
  printf("changing *p2...\n");
  *p2 = 8;
  printf("*p2 = %d\n", *p2);
}

int main()
{
  int a = 5;
  int *p;

  printf("address of a (&a) = %d\n", &a);
  p = &a; // &a = address of a

  printf("p = %d\n", p);
  printf("*p = %d\n", *p); // *p - value at the address pointed by p
  test(&a);
  printf("after calling test\n");
  printf("*p = %d\n", *p); // *p - value at the address pointed by p

  // pointer to pointer
  int **p3 = &p;
  printf("*p3 = %d\n", *p3);
  printf("**p3 = %d\n", **p3);
}