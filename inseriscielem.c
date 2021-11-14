#include <stdio.h>
#define NUMEL 5
void GetLista(int lista[])
{
	int i;
	for (i = 0; i < NUMEL; i++)
	{
		scanf("%d", &lista[i]);
	}
}
int inserisci(int lista[], int n, int el, int pos)
{
	int i;
	if (pos < 0 || pos > n)
	{
		return n;
	}
	for (i = n; i > pos; i--)
	{
		lista[i] = lista[i-1]; //shift a destra
	}
	lista[pos] = el;
	return n+1;
}
void StampaLista(int lista[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", lista[i]);
	}
}
int main(void)
{
	int lista[NUMEL], n;
	printf("inserisci i valori della lista:\n");
	GetLista(lista);
	n = inserisci(lista, NUMEL, 33, 2);
	StampaLista(lista, n);
	printf("\n");
	return 0;
}	
