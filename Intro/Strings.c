#define STRINGS
#ifdef STRINGS

#include <stdio.h>

int main() {

	
	char* name = "vio";
	
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

	strcpy(str, "1234");
	printf("value of str is %s\n", str);
	printf("length of str is: %d\n", strlen(str));

	
	char full_name[15];

	strcpy(full_name, name);
	strcat(full_name, " slaniceanu");

	printf("my full name is '%s' and it's length is %d\n", full_name, strlen(full_name));

}



#endif // STRINGS
