
//#define SCANF_FUNC

#ifdef SCANF_FUNC
#include <stdio.h>

void read_int(int *value)
{
	scanf_s("%d", value);
}


int main() {
	int age = 025; // octal format

	printf("Your initial age is: %d", age);

	printf("Enter your age: ");

	// scanf is deprecated 
	// in order to use it though you can #define _CRT_SECURE_NO_WARNINGS

	//scanf_s("%d", &age);
	read_int(&age);


	printf("Your entered age is: %d", age);

	// flush away all characters typed in by the 
	// keyboard but not read by the program
	// but somehow it doesn't work
	int c2 = fflush(stdin);

	int c = getchar();
	getchar();
	printf("Read char is %d", c);
}

#endif // SCANF_FUNC
 