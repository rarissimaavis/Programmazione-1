#include <stdio.h> 
#define NUMEL 10
void GetLista(int lista[])
{
	int i;
	for (i = 0; i < NUMEL; i++)
	{
		scanf("%d", &lista[i]);
	}
}
void StampaLista(int lista[])
{
	int i;
	for (i = 0; i < NUMEL; i++)
	{
		printf("%d ", lista[i]);
	}
}
void Inversa(int lista[])
{
	int i, temp;
	for (i = 0; i < NUMEL/2; i++)
	{
		temp = lista[i];
		lista[i] = lista[NUMEL-1-i];
		lista[NUMEL-1-i] = temp;
	}
}
int main(void)
{
	int lista[NUMEL];
	printf("inserisci i valori della lista:\n");
	GetLista(lista);
	Inversa(lista);
	printf("La lista inversa è: ");
	StampaLista(lista);
	printf("\n");
	return 0;
}
