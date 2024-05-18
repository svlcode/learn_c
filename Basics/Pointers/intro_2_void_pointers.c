#include <stdio.h>

int main()
{
  int a = 10;
  int *p;
  p = &a;

  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Addess of p is %d\n", p);

  // void pointer;
  void *vp;
  vp = p;

  printf("Addess of vp is %d\n", vp);
  // *vp is not allowed - compile time error
  // vp+1 is also not allowed - compile time error
  // however, I can use something like this:

  printf("Casting a void pointer to an integer pointer, then dereference the pointer:\n");
  printf("*((int *)vp) = %d\n", *((int *)vp));
}