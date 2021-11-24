#include <stdio.h>
#define NMAX 10
int getarray(int lista[])
{
	int i, val;
	printf("inserisci gli elementi dell'array (-1 per terminare): \n");
	for (i = 0; i < NMAX; i++)
	{
		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}
		lista[i] = val;
	}
	return i;
}
int potenza(int n, int esponente)
{
	for (int i = 1; i < esponente; i++)
	{
		n *= n;
	}
	return n;
}
void riempiarrayb(int lista1[], int lista2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		lista2[i] = potenza(lista1[i], 2);
	}
}
void riempiarrayc(int lista1[], int lista2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		lista2[i] = potenza(lista1[i], 3);
	}
}
void stampaarray(int lista[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", lista[i]);
	}
	printf("\n");
}
int main(void)
{
	int a[NMAX], b[NMAX], c[NMAX], n;
	n = getarray(a);
	riempiarrayb(a, b, n);
	riempiarrayc(a, c, n);
	printf("l'array b è: ");
	stampaarray(b, n);
	printf("l'array c è: ");
	stampaarray(c, n);
	return 0;
}

		
