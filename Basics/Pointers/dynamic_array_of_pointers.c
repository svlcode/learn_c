#include <stdio.h>
#include <stdlib.h>

int main()
{
  int rows;
  printf("How many rows: ");
  scanf("%d", &rows);

  int **p = malloc(rows * sizeof(int *));
  if (p == NULL)
  {
    printf("Error - cannot allocate memory");
    exit(1);
  }

  int *columns = malloc(rows * sizeof(int));

  for (int i = 0; i < rows; i++)
  {
    printf("How many columns for row %d: ", i);
    scanf("%d", &columns[i]);

    int *row = malloc(columns[i] * sizeof(int));

    for (int j = 0; j < columns[i]; j++)
    {
      printf("Enter a number: ");
      scanf("%d", &row[j]);
    }
    p[i] = row;
  }

  printf("the numbers entered are:\n");

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns[i]; j++)
    {
      printf("%4d", p[i][j]);
    }
  }
}