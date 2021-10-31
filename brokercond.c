#include <stdio.h> 
int main(void)
{
	float valore, commissione;
	printf("inserisci l'ammontare della transazione: \n");
	scanf("%g", &valore);
	(valore > 500000) ? (commissione = 255 + 0.09 * valore / 100) : 0;
	(valore < 500000) ? (commissione = 155 + 0.11 * valore / 100) : 0;
	(valore < 50000) ? (commissione = 100 + 0.22 * valore / 100) : 0;
	(valore < 20000) ? (commissione = 76 + 0.34 * valore / 100) : 0;
	(valore < 6250) ? (commissione = 56 + 0.66 * valore / 100) : 0;
	(valore < 2500) ? (commissione = 30 + 1.7 * valore / 100) : 0;
	(commissione < 39) ? (commissione = 39) : 0;
	printf("commissione: $%g\n", commissione);
	return 0;
}
