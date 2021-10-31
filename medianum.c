/*media tra due numeri*/
#include <stdio.h>
int main(void)
{
	int a, b;
	float somma;
	float media;
	printf("inserisci il primo numero: ");
	scanf("%d", &a);
	printf("inserisci il secondo numero: ");
	scanf("%d", &b);
	somma = a+b;
	media = somma/2;
	printf("la media tra %d e %d è %g\n", a, b, media);
	return 0;
}
