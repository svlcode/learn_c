//#define SCANF_FUNC

#ifdef SCANF_FUNC
#include <stdio.h>

void read_int(int *value)
{
	scanf(" %d", value);
}

int main()
{
	int age = 025; // octal format

	printf("Your initial age is: %d", age);

	printf("Enter your age: ");

	// scanf_s("%d", &age);
	read_int(&age);

	printf("Your entered age is: %d", age);

	int c = getchar();
	// getchar();
	printf("Read char is %d", c);
}

#endif // SCANF_FUNC
