#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <limits.h>

int read_integer()
{
  // const int max_int = 2147483647; // Maximum value for a 32-bit signed integer
  int number = 0;
  while (1)
  {
    char ch = getch();
    if (ch == '\r' || ch == '\n')
    {
      break;
    }

    if (isdigit(ch))
    {
      if (number == 0 && ch == '0') // only read the digit if the first digit is not zero
        printf("\b \b", ch);
      else
      {
        int digit = ch - '0'; // convert it to a number
        long long temp_result = ((long long)number * 10) + digit;
        if (temp_result <= INT_MAX && temp_result >= INT_MIN) // check if the number overlows int max value
        {
          printf("%c", ch);     // show it to the screen
          number = temp_result; // add it to the number
        }
      }
    }
    else if (ch == '\b' && number != 0)
    {
      printf("\b \b", ch); // remove the character, add a space and then move back
      number /= 10;
    }
  }

  return number;
}

int main()
{
  printf("Enter a sequence of characters (digits only): ");

  int number = read_integer();
  printf("\nFinal number is %d", number);
}