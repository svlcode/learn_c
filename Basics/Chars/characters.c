//#define CHARS
#ifdef CHARS
#include <stdio.h>

int main()
{
	char c = 'A';
	printf("Character is %c\n", c);
	printf("ASCII code of character %c is %d", c, c);

	printf("Enter a character: ");
	char another;
	scanf_s("%c", &another);

	printf("You have entered '%c'\r\n", another);

	for (int i = 65; i < 91; i++)
	{
		printf("'%c' = %d\r\n", i, i);
	}
}

#endif // CHARS
