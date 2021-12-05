#include <stdio.h>
void azzera(int *n)
{
	*n = 0;
}
int main(void)
{
	int i;
	i = 10;
	azzera(&i);
	printf("valore di i: %d\n", i);
	return 0;
}
