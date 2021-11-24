#include <stdio.h>
#define N 4
void getlista(int lista[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &lista[i]);
	}
}
void unisci(int a[], int b[], int c[], int n)
{
	int i, j, k;
	for (i = 0, k = 0; i < n; i++)
	{
		c[k] = a[i];
		k +=2;
	}
	for (j = 0, k = 1; j < n; j++)
	{
		c[k] = b[j];
		k += 2;
	}
}
void stampalista(int lista[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", lista[i]);
	}
	printf("\n");
}
int main(void)
{
	int a[N], b[N], dim = (2*N), c[dim];
	printf("inserisci gli elementi del primo array:\n");
	getlista(a, N);
	printf("inserisci gli elementi del secondo array:\n");
	getlista(b, N);
	unisci(a, b, c, N);
	printf("l'array finale è: ");
	stampalista(c, dim);
	return 0;
}
