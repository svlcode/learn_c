#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int read_integer()
{
  int i = 0;
  int number = 0;
  while (1)
  {
    char ch = getch();
    if (ch == '\r' || ch == '\n')
    {
      break;
    }

    // only read the digit if the first digit is not zero
    if (isdigit(ch))
    {
      if (i == 0 && ch == '0')
        printf("\b \b", ch);
      else
      {
        int digit = ch - '0'; // convert it to a number

        printf("%c", ch);               // show it to the screen
        number = (number * 10) + digit; // add it to the number
      }
    }
    else if (ch == '\b')
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