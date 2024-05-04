#include <stdio.h>

// substracting 2 pointers from pointers will result in calculating
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

// adding numbers to pointers
// if p is 2002, then p+3 would be 2014 because
// p + c = p + c*sizeof(type_of_pointer)
// where p is a constant
// in our case p + 3 = p + (3 * sizeof(int)) = p + 12 = 2002 + 12 = 2014
void adding_to_pointer()
{
  int *p = (int *)2002;
  printf("Addess of p is %d\n", p);
  printf("Addess of p is %d\n", p + 3);
}

// casting to another pointer type:
// value will be 1 because:
// 1025 = 00000000 00000000 00000100 00000001
// and p points only to the first byte, so *p will be
// dereferencing only the first byte which is 00000001
void cast_to_other_pointer_type()
{
  int a = 1025;

  char *p;
  p = (char *)&a; // typecasting

  printf("Address of p = %d, value = %d\n", p, *p);
}

int main()
{
  int a = 10;
  int *p;

  p = &a;

  printf("Addess of p is %d\n", p);
  printf("Addess of p+1 is %d\n", p + 1);
  printf("size of integer is %d bytes\n", sizeof(int));

  adding_to_pointer();

  substracting_pointers();
}