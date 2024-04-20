#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation functions

#define INITIAL_SIZE 10 // Initial size for dynamic allocation

char *read_dynamic_string()
{
  int capacity = INITIAL_SIZE; // Initial capacity of the string
  int length = 0;              // Length of the string read
  int size_of_char = sizeof(char);

  // Pointer to hold the string
  char *str = (char *)malloc(capacity * size_of_char); // Allocate initial memory
  if (str == NULL)
  {
    // Memory allocation failed.
    return NULL;
  }

  // Read characters until newline (Enter) is encountered
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
  {
    // Check if more memory is needed
    if (length >= capacity - 1) // -1 for the null terminator
    {
      capacity *= 2;                                              // Double the capacity
      char *temp = (char *)realloc(str, capacity * size_of_char); // Resize the memory
      if (temp == NULL)                                           // Memory allocation failed.
      {
        free(str); // Free previously allocated memory
        return NULL;
      }
      str = temp; // Update the pointer to the new memory block
    }

    // Store the character in the string
    str[length++] = (char)c;
  }

  // Add null terminator to make it a valid C string
  str[length] = '\0';
  return str;
}

int main()
{
  printf("Enter a string (press Enter to finish): ");
  char *result = read_dynamic_string();
  if (result == NULL)
  {
    printf("Memory allocation failed.\n");
  }
  else
  {
    printf("You entered: %s\n", result);
    free(result); // Free the allocated memory
  }

  return 0;
}
