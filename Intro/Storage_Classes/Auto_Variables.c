#define AUTO_VAR
#ifdef AUTO_VAR
#include <stdio.h>

void test1() {
	auto int k = 0;
	printf("k = %d\r\n", k);
	k = 20;
	printf("k = %d\r\n", k);
}

void test() {
	int var = 0;
	printf("var = %d\r\n", var);
	var++;
	printf("var = %d\r\n", var);
}

int main()
{
	test1();
	test();
}

#endif // AUTO_VAR
