#include <stdio.h>

int main()
{
  int *p[3];
  int **k = p;

  int x[3] = {1, 2, 3};
  int y[3] = {4, 5, 6};
  int z[3] = {7, 8, 9};
  p[0] = x;
  p[1] = y;
  p[2] = z;

  // print the second element of the third array using pointer notation
  int value = *(*(p + 2) + 1);
  printf("second element of the third array *(*(p + 2) + 1): %d\n", value);

  // using array notation
  value = p[2][1];
  printf("second element of the third array p[3][2]: %d\n", value);
}