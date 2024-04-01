// #define STRINGS2
#ifdef STRINGS2

#include <stdio.h>

int main()
{

	char *name = "vio";

	// similar with printf, but only prints strings
	puts(name);

	printf("size of name is %d\n", sizeof(name));
	printf("\n");
	printf("length of name is: %d\n", strlen(name));

	printf("\n");

	char str[5] = "abc";

	int length_str = sizeof(str) / sizeof(str[0]);

	printf("value of str is %s\n", str);
	printf("length of str is: %d\n", strlen(str));

	// in a char array of length 5, you can only copy a string of 4 characters
	// because you have to leave room for the null terminating character.
	strcpy(str, "1234");
	printf("value of str is %s\n", str);
	printf("length of str is: %d\n", strlen(str));

	char full_name[15];

	strcpy(full_name, name);
	strcat(full_name, " slaniceanu");

	printf("my full name is '%s' and it's length is %d\n", full_name, strlen(full_name));
}

#endif // STRINGS2
