#include <stdio.h>
#define NMAX 30
int GetLista(int lista[])
{
	int n, val;
	for (n = 0; n < NMAX; n++)
	{
		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}
		lista[n] = val;	
	}
	return n;
}
int filtrosum(int a[], int na, int b[], int nb, int c[], int nc)
{
	int i, k, j = 0;
	for (i = 0; i < na; i++)
	{
		for (k = 0; k < nb; k++)
		{
			if ( (b[k] + b[k+1]) == a[i])
			{
				c[j] = a[i];
				j++;
			}			
		}
	}
	return j;
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
	int a[NMAX], b[NMAX], c[NMAX], na, nb, nc, elemcopiati;
	printf("inserisci gli elementi dell'array A (-1 per terminare): \n");
	na = GetLista(a);
	printf("inserisci gli elementi dell'array B (-1 per terminare): \n");
	nb = GetLista(b);
	nc = na; 
	elemcopiati = filtrosum(a, na, b, nb, c, nc);
	printf("gli elementi copiati in c sono: %d\n", elemcopiati);
	printf("l'array c è: ");
	StampaLista(c, elemcopiati);
}
	
