#include <stdio.h>

int main()
{
  int a = 10;
  int *p;
  p = &a;

  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Addess of p is %d\n", p);

  // void pointer;
  void *p0;
  p0 = p;

  printf("Addess of p0 is %d\n", p0);
  // *p0 is not allowed - compile time error
  // p0+1 is also not allowed - compile time error
}