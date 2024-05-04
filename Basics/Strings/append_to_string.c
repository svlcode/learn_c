#include <stdio.h>
#include <string.h> // Include for strlen() function

// Function to append " World" to a string, safely
void appendString(char *str, int maxSize)
{
  int currentLength = strlen(str); // Get current length of the string

  // Calculate the maximum number of characters that can be appended
  int maxAppendLength = maxSize - currentLength - 1; // Leave room for '\0'

  // Append " World" (or as much as will fit without overflow)
  strncat(str, " World", maxAppendLength);
}

int main()
{
  char greeting[12] = "Hello"; // Ensure enough space for "Hello World\0"

  printf("Before: %s\n", greeting); // Output: Before: Hello

  // Pass the string `greeting` and its size to the function
  appendString(greeting, sizeof(greeting));

  printf("After: %s\n", greeting); // Output: After: Hello World

  return 0;
}