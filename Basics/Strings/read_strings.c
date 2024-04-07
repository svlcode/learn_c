#include <stdio.h>

void clear_buffer()
{
  char ch;
  while (ch = getchar() != '\n')
  {
  };
}

/*
Pros:
  - Reads characters into input_string until a newline ('\n') character is encountered.
  - Stops reading at the newline character, so the newline is not stored in the string.
Cons:
  - Vulnerable to buffer overflow if the input string is longer than the size of input_string since scanf doesn't automatically limit the number of characters read.
  - Leaves the newline character ('\n') in the input buffer, which can cause issues if not handled properly.
*/
void using_scanf()
{
  char full_name[10];
  printf("Enter your full name: ");
  scanf("%[^\n]", full_name);

  // needed to clear the input buffer of the newline char
  clear_buffer();

  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  clear_buffer();

  char address[100];
  printf("Enter your address: ");
  scanf("%[^\n]", address);

  printf("Your full name is %s and your address is %s", full_name, address);
}

/*
Pros:
  - Reads a line of input from stdin (standard input) and stops when a newline ('\n') character is encountered or when the maximum number of characters (sizeof(input_string) - 1) is read.
  - Automatically handles newline characters ('\n') by storing them in the string (input_string).
  - Safer for reading strings as it prevents buffer overflow by limiting the number of characters read.
Cons:
  - Requires handling of the newline character ('\n') at the end of the string, which can be removed if not desired.
*/
void using_fgets()
{
  char full_name[10];
  printf("Enter your full name: ");
  fgets(full_name, sizeof(full_name), stdin);

  // this is only needed in case buffer overlows
  clear_buffer();

  char address[20];
  printf("Enter your address: ");
  fgets(address, sizeof(address), stdin);
  printf("Your full name is %s and your address is %s", full_name, address);
}

int main()
{
  using_scanf();
  using_fgets();
}