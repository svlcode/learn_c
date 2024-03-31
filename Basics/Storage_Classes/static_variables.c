//#define STATIC_VAR
#ifdef STATIC_VAR
#include <stdio.h>

void test() {
	static int var;
	printf("var = %d\r\n", var);
	var++;
	printf("var = %d\r\n", var);
}

int main()
{
	test();
	test();
}

#endif // STATIC_VAR
