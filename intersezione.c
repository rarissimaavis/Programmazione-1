#include <stdio.h>
#define NMAX 30
void GetLista(int lista[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &lista[i]);
	}
}
int ricerca(int lista[], int n, int elem)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (lista[i] == elem)
		{
			return 1;
		}
	}
	return 0;
}
int intersezione(int A[], int B[], int n, int m, int C[])
{
	int i, j, k = 0;
	for (i = 0; i < n; i++)
	{
		if (ricerca(B, m, A[i]) == 1)
		{
			C[k] = A[i];
			k++;
		}
	}
	return k;
}
void StampaLista(int lista[], int n)
{
	int i; 
	for (i = 0; i < n; i++)
	{
		printf("%d ", lista[i]);
	}
	printf("\n");
}
int main(void)
{
	int A[NMAX], B[NMAX], n, m, C[NMAX], l;
	printf("riempimento vettore A: ");
	scanf("%d", &n);
	printf("riempimento vettore B: ");
	scanf("%d", &m);
	if (n > NMAX || m > NMAX)
	{
		printf("valori non validi\n");
		return 0;
	}
	printf("inserisci gli elementi di A: \n");
	GetLista(A, n);
	printf("inserisci gli elementi di B: \n");
	GetLista(B, m);
	l = intersezione(A, B, n, m, C);
	StampaLista(C, l);
	return 0;
}
