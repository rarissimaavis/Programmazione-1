#include <stdio.h> 
float calcola_commissione(float quota, float perc, float valore);
int main(void)
{
	float valore, commissione;
	printf("inserisci l'ammontare della transazione: \n");
	scanf("%g", &valore);
	if (valore < 2500)
	{
		commissione = calcola_commissione(30, 1.7, valore);
	}
	else if (valore < 6250)
	{
		commissione = calcola_commissione(56, 0.66, valore);
	}
	else if (valore < 20000)
	{
		commissione = calcola_commissione(76, 0.34, valore);
	}
	else if (valore < 50000)
	{
		commissione = calcola_commissione(100, 0.22, valore);
	}
	else if (valore < 500000)
	{
		commissione = calcola_commissione(155, 0.11, valore);
	}
	else
	{
		commissione = calcola_commissione(255, 0.09, valore);
	}
	if (commissione < 39)
	{
		commissione = 39;
	}
	printf("commissione: $%g\n", commissione);
	return 0;
}

float calcola_commissione(float quota, float perc, float valore)
{
	return (quota + perc * valore / 100);
}
