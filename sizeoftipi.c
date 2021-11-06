#include <stdio.h> 
int main(void)
{
	printf("int: %ld bytes\n", sizeof(int));
	printf("short int: %ld bytes\n", sizeof(short int));
	printf("long int: %ld bytes\n", sizeof(long int));
	printf("float: %ld bytes\n", sizeof(float));
	printf("double: %ld bytes\n", sizeof(double));
	printf("char: %ld byte\n", sizeof(char));
	return 0;
}
