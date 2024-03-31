// #define FUNC

#ifdef FUNC

#include <stdio.h>

// add function declarations at the top of the file before using it
int add(int a, int b);
void test1();

int add(int a, int b)
{
  test1();
  return a + b;
}

void test1()
{
  printf("Test1\n");
}

int main()
{
  int a = 5, b = 14;
  int result = add(a, b);

  printf("The sum of %d and %d is %d", a, b, result);

  return 0;
}

#endif