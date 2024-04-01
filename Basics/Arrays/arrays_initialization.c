// #define ARR1

#ifdef ARR1

#include <stdio.h>

int main()
{
  int array[] = {1, 2, 3};
  printf("The size of the array is: %d\n", sizeof(array));

  // The length of the array is the size of the array divided by the size of an element of the array
  printf("The length of the array is: %d\n", sizeof(array) / sizeof(array[0]));

  // the rest of the elements not specified they will be zero
  int array2[5] = {1, 2, 3};

  for (int i = 0; i < 5; i++)
  {
    printf("array2[%d] = %d\n", i, array2[i]);
  }

  int array3[5] = {0};

  array3[1] = 2;
  array3[4] = 5;

  for (int i = 0; i < 5; i++)
  {
    printf("array3[%d] = %d\n", i, array3[i]);
  }

  return 0;
}

#endif