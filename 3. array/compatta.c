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
int compatta(int lista[], int n) 
{
	int i, j;
	for (i = 0; i < n-1;)
	{
		if (lista[i] == lista[i+1])
		{
			for (j = i; j < n-1; j++)
			{
				lista[j] = lista[j+1];
			}
			n--;
		}
		else i++;
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
int main(void)
{
	int lista[NUMEL], n;
	printf("inserisci i valori della lista:\n");
	GetLista(lista);
	n = compatta(lista, NUMEL);
	StampaLista(lista, n);
	printf("\n");
	return 0;
}	
