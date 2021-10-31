#include <stdio.h>
int main(void)
{
	float n, x, km;
	printf("inserisci il numero di km: ");
	scanf("%f", &n);
	printf("inserisci il numero di litri: ");
	scanf("%f", &x);
	km = n/x;
	printf("una moto percorre %g km con 1 l di benzina\n", km);
	return 0;
}
