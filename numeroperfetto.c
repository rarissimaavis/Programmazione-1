#include <stdio.h>
int sommadivisori(int n)
{
	int i, sommadiv = 0;
	for (i = 1; i < n; i++)
	{
		if (n%i == 0)
		{
			sommadiv += i;
		}
	}
	return sommadiv;
}
int numperfetto(int n, int sommadiv)
{
	if (n == sommadiv)
	{
		return 1;
	}
	return 0;
}
int separaeinverti(int n, int lista[])
{
	int i = 0;
	while (n > 0)
	{
		lista[i] = n%(10);
		n /= 10;
		i++;
	}
	return i;
}
void StampaLista(int lista[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", lista[i]);
	}
	printf("\n");
}
int main(void)
{
	int n, sommadiv, isPerf, cifre, lista[cifre];
	printf("inserisci un numero: ");
	scanf("%d", &n);
	sommadiv = sommadivisori(n);
	printf("somma: %d\n", sommadiv);
	isPerf = numperfetto(n, sommadiv);	
	printf("num: %d\n", isPerf);		//controllo se è perfetto
	if (isPerf == 1)
	{
		cifre = separaeinverti(n, lista);
		printf("l'inverso è: ");
		StampaLista(lista, cifre);
	}
	return 0;
}
	
