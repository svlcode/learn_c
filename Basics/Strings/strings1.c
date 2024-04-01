#define STRINGS1

#ifdef STRINGS1

#include <stdio.h>
// needed for the definition of strlen
#include <string.h>

int main()
{
  char str[80] = "Hello world";
  printf("My array is %s\n", str);
  printf("The length of str is %d\n\n", strlen(str));

  // Cannot reassign str array to another string
  // str = "My name is ...";
  // instead we can use strcpy
  strcpy(str, "test");
  printf("My array is %s\n", str);
  printf("The length of str is %d\n\n", strlen(str));

  // The following code will overflow
  // char small_string[] = "abc";
  // printf("small_string is %s\n", small_string);
  // strcpy(small_string, "Hello World");
  // printf("small_string after reassignment is %s\n", small_string);

  char name[] = "Vio";
  printf("name is %s\n", name);
  printf("The length of name is %d\n", strlen(name));
  printf("The size of name is %d\n", sizeof(name));

  int last_index = strlen(name) - 1; // we need to substract -1 because of the null terminating character
  char last_element = name[last_index];
  printf("last element is %c", last_element);

  // reading an string from keyboard
  char full_name[50];
  printf("enter your name: ");
  scanf("%[^\n]", full_name);

  printf("The name entered is: %s", full_name);
}

#endif