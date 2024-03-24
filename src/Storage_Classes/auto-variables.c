// #define AUTO_VAR
#ifdef AUTO_VAR
#include <stdio.h>

void test1()
{
	// auto is optional and implicit
	auto int k; // value here is not guaranteed and not initialized
	printf("k = %d\r\n", k);
	k = 20;
	printf("k = %d\r\n", k);
}

void test()
{
	// auto is optional and implicit
	int var; // value here is most likely the one that was previously dealocated from k variable
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
