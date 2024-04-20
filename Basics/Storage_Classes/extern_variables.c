#include <stdio.h>

void test()
{
  extern int gVar;
  printf("gvar = %d\n", gVar);
  gVar = 20;
}

int gVar; // global variable

int main()
{
  extern int gVar;
  printf("gvar = %d\n", gVar);
  gVar = 10;
  test();

  printf("gvar = %d\n", gVar);
}