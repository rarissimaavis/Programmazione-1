#include <stdio.h> 
#define NUMEL 20
int GetLista(int lista[])
{
	int i, n=0;
	for (i = 0; i < NUMEL; i++)
	{
		printf("inserisci elemento: ");
		scanf("%d", &lista[i]);
		if (lista[i] == -1) break;
		n++;
	}
	return n;
}
void StampaLista(int lista[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", lista[i]);
	}
}
void Inversa(int lista[], int n)
{
	int i, temp;
	for (i = 0; i < n/2; i++)
	{
		temp = lista[i];
		lista[i] = lista[n-1-i];
		lista[n-1-i] = temp;
	}
}
int main(void)
{
	int n;
	int lista[NUMEL];
	printf("inserisci i valori della lista:\n");
	n = GetLista(lista);
	Inversa(lista, n);
	printf("La lista inversa è: ");
	StampaLista(lista, n);
	printf("\n");
	return 0;
}
