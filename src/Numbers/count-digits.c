//#define COUNT

#ifdef COUNT

#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	int c; // character to read
	int count = 0; // digits found
	const int ENTER_KEY = 10;

	while ((c = getchar()) != ENTER_KEY)
	{
		if (isdigit(c)) {
			count++;
		}
	}

	printf("\n%d digits found\n", count);
	
}
#endif // COUNT
