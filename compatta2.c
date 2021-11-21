#include <stdio.h>
#define NMAX 20
void GetLista(int lista[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &lista[i]);
	}
}
int ricerca(int elem, int lista[], int n1)
{
	int i;
	for (i = 0; i < n1; i++)
	{
		if (elem == lista[i])
		{
			return 1;
		}
	}
	return 0;
}
int compatta(int A[], int n, int B[], int n1)
{
	int i;
	n1 = 0;
	for (i = 0; i < n; i++)
	{
		if (ricerca(A[i], B, n1) == 0)
		{
			B[n1] = A[i];
			n1++;
		}
	}
	return n1;
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
	int A[NMAX], B[NMAX], n, n1;
	printf("quanti elementi ha A? ");
	scanf("%d", &n);
	printf("inserisci gli elementi di A: \n");
	GetLista(A, n);
	n1 = compatta(A, n, B, n1);
	printf("gli elementi di B sono: ");
	StampaLista(B, n1);
}
