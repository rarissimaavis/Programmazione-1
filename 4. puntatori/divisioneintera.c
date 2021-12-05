#include <stdio.h>
void divisioneintera(int num, int div, int *q, int *r) 
{
	*q = num/div;
	*r = num&div;
}
int main(void)
{
	int quoziente, resto, dividendo, divisore;
	printf("inserisci il numero da dividere: ");
	scanf("%d", &dividendo);
	printf("inserisci il divisore: ");
	scanf("%d", &divisore);
	divisioneintera(dividendo, divisore, &quoziente, &resto);
	printf("15 diviso 7 fa %d con resto %d\n", quoziente, resto);
	return 0;
}
