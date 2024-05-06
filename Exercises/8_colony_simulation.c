#include <stdio.h>

void print_arr(int arr[], int size);
void simulate(int arr[], int arr_size, int days);

// Simulate a colony of 8 elements (array of size 8) which can be either 0 (inactive) or 1 (active)
// The state of the elements can only be changed based on its neighbours.
// the state of an element becomes inactive if both neighbours are either active or inactive
// the state of an element becomes active if one of the neighbours is active, while the other is inactive

void simulate(int arr[], int arr_size, int days)
{
  int prev[arr_size];

  for (int day = 0; day < days; day++)
  {
    // Create a copy of the current state to ensure we update based on the previous state
    for (int i = 0; i < arr_size; i++)
    {
      prev[i] = arr[i];
    }

    for (int i = 0; i < arr_size; i++)
    {
      int leftNeighbour = i != 0 ? prev[i - 1] : 0;
      int rightNeighbour = i != (arr_size - 1) ? prev[i + 1] : 0;
      arr[i] = leftNeighbour == rightNeighbour ? 0 : 1;
    }
    print_arr(arr, arr_size);
  }
}

void print_arr(int arr[], int size)
{
  printf("\n[");
  for (int i = 0; i < size; i++)
  {
    if (i != size - 1)
    {
      printf("%d|", arr[i]);
    }
    else
    {
      printf("%d]", arr[i]);
    }
  }
}

int main()
{

  int size = 8;
  printf("Enter the number of elements in the colony: ");
  scanf("%d", &size);

  // Ensure the size is within bounds
  if (size <= 0)
  {
    printf("Invalid size. Size must be a positive integer.\n");
    return 1; // Exit with an error
  }

  int arr[size];

  for (int i = 0; i < size; i++)
  {
    printf("Enter the initial value of element (0 or 1): ");
    scanf("%d", &arr[i]);
  }

  int days;
  printf("Enter the number of days to simulate: ");
  scanf("%d", &days);

  // Ensure the number of days is non-negative
  if (days < 0)
  {
    printf("Invalid number of days. Number of days must be non-negative.\n");
    return 1; // Exit with an error
  }

  simulate(arr, size, days);
}