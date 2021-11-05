#include <stdio.h>
#define NUMEL 10
int main(void)
{
	double valori[NUMEL];
	int i;
	for (i = 0; i < NUMEL; i++)
	{
		printf("inserisci il valore %d: ", i);
		scanf("%lf", &valori[i]);
	}
	for (i = NUMEL-1; i >= 0; i--)
	{
		printf("%g ", valori[i]);
	}
	printf("\n");
	return 0;
}
