#include <stdio.h>

// in this situation substractic 2 pointers will result in calculating
// how many <double> locations are between them
// this will be 1000 because, size of double is 8 and then
// 2000 + 8*1000 = 10000
void substracting_pointers()
{
  double *p = (double *)10000;
  double *q = (double *)2000;

  // p - q = (10000 - 2000) / 8
  printf("p - q = %d\n", p - q);
}

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

  printf("Address of p0 = %d, value = %d\n", p0, *p0);
  // value will be 1 because
  // 1025 = 00000000 00000000 00000100 00000001
  // and p0 points only to the first byte

  substracting_pointers();
}