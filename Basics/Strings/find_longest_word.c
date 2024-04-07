#include <stdio.h>
#include <string.h>

int main()
{
  char str[80];
  printf("Enter a string: ");
  scanf("%[^\n]", str);

  char longest_word[80];
  int longest_word_count = 0;

  char current_word[80];
  int current_word_index = 0;

  for (int i = 0;; i++)
  {
    if (str[i] == ' ' || str[i] == '\0')
    {
      // add null terminator character to mark the end the string
      current_word[current_word_index] = '\0';
      if (current_word_index > longest_word_count)
      {
        strcpy(longest_word, current_word);
        longest_word_count = current_word_index;
      }
      if (str[i] == '\0')
        break;
      // reset the current word
      current_word_index = 0;
    }
    else
    {
      current_word[current_word_index] = str[i];
      current_word_index++;
    }
  }

  printf("The longest word is '%s' and is %d characters long", longest_word, longest_word_count);
}