#include <stdio.h>

// In C, arrays are not passed by reference; instead, they decay into pointers when passed to functions.
// arr2 decays into a pointer to its first element within the function modify_array,
// so any changes made to the array elements within modify_array are reflected in the original array arr
int modify_array(int arr2[], int size)
{
  printf("Modifying array inside function... \n");
  for (int i = 0; i < size; i++)
  {
    arr2[i] *= 10;
  }

  printf("Printing modified array inside function: \n");

  for (int i = 0; i < size; i++)
  {
    printf("arr2[%d] = %d\n", i, arr2[i]);
  }
}

int main()
{
  int arr[] = {1, 2, 3};

  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: \n");
  for (int i = 0; i < size; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  modify_array(arr, size);

  printf("Modified array: \n");
  for (int i = 0; i < size; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }
}