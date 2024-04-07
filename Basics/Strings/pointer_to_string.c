#include <stdio.h>

int main()
{

  // name is stored in stack
  char name[] = "Vio";
  // we can modify name because it's on the stack
  name[0] = 'B';

  printf("name is %s\n", name);

  // middle_name is pointing to a string literal which is
  // stored in a read-only memory, and attempting to modify them directly leads to undefined behavior.
  // Therefore, the following code will result in an error because you cannot modify a string litteral:
  // char *middle_name = "Lucian";
  // middle_name[0] = 'B';
  // printf(middle_name);

  // other name is pointing to name which is stored in the stack
  // therefore, we should be able to change it
  char *other_name = name;
  other_name[0] = 'J';
  printf("other name is %s", other_name);
}