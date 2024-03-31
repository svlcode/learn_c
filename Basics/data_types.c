//#define DATA_TYPES

#ifdef DATA_TYPES

#include <stdio.h>

int main() {
	char c;

	
	float f_num = 1.89714;
	double d_num = 1.897134212455768;

	short int aa = 4;

	int x = 5, 
		y = 6;

	int octal_number = 015; // this is 13 in the octal format
	printf("octal_number = %d\r\n", octal_number); // decimal
	printf("octal_number = %o\r\n", octal_number); // octal
	printf("octal_number = %x\r\n", octal_number); // hexa
	
	int hexa_number = 0x23; // this is 35 in hexadecimal format
	printf("hexa_number = %d\r\n", hexa_number); // decimal
	printf("hexa_number = %o\r\n", hexa_number); // octal
	printf("hexa_number = %x\r\n", hexa_number); // hexa


	// long is an alias for long int
	// short is an alias for short int
	// unsigned is an alias for unsigned int

	signed a = 34;

	
	

	printf("f_num is %f\n", f_num);
	printf("d_num is %f\n", d_num);

	printf("sizeof(char) is %d\n", (int)sizeof(char));
	printf("sizeof(int) is %d\n", (int)sizeof(int));
	printf("sizeof(short) is %d\n", (int)sizeof(short));
	printf("sizeof(long int) is %d\n", (int)sizeof(long int));
	printf("sizeof(long) is %d\n", (int)sizeof(long));
	printf("sizeof(long long) is %d\n", (int)sizeof(long long));
	printf("sizeof(float) is %d\n", (int)sizeof(float));
	printf("sizeof(double) is %d\n", (int)sizeof(double));
}

#endif // DATA_TYPES
