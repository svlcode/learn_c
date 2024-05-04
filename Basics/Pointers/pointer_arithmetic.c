#include <stdio.h>

int main()
{
  int a = 10;
  int *p;

  p = &a;

  printf("Addess of p is %d\n", p);
  printf("Addess of p+1 is %d\n", p + 1); // if p is 2002, then p+1 would be 2006
  printf("size of integer is %d bytes\n", sizeof(int));

  a = 1025;

  char *p0;
  p0 = (char *)p; // typecasting

  printf("Address of p0 = %d, value = %d", p0, *p0);
  // value will be 1 because
  // 1025 = 00000000 00000000 00000100 00000001
  // and p0 points only to the first byte
}