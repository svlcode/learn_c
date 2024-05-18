#include <stdio.h>

// Function prototype
void greet();
int get_sum(int a, int b);

int main()
{
  // Declare a void pointer
  void (*func_ptr)(void);

  // Assign the address of the function to the void pointer
  func_ptr = &greet;

  // Call the function using the void pointer
  (*func_ptr)();

  int (*fn_ptr_sum)(int, int);

  fn_ptr_sum = &get_sum;

  int a = 2,
      b = 3;
  int sum = (*fn_ptr_sum)(a, b);
  printf("the sum is: %d", sum);

  return 0;
}

int get_sum(int a, int b)
{
  return a + b;
}

// Function definition
void greet()
{
  printf("Hello, world!\n");
}