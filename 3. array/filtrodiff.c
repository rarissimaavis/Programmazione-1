#include <stdio.h>
#define NMAX 10
int getlista(int lista[], int n)
{	
	int i, val;
	for (i = 0; i < n; i++)
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
int diffuguale(int elem, int b[], int nb)
{
	for (int i = 0; i < nb - 1; i++)
	{
		if (elem == b[i] - b[i+1])
		{
			return 1;
		}
	}
	return 0;
}
int filtrodiff(int a[], int b[], int c[], int na, int nb, int nc)
{
	int i, j = 0;
	for (i = 0; i < na; i++)
	{
		if (diffuguale(a[i], b, nb) == 1)
		{
			c[j] = a[i];
			j++;
		}
	}
	return j;
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
	int a[NMAX], b[NMAX], c[NMAX], na, nb, nc;
	printf("inserisci gli elementi di a: \n");
	na = getlista(a, NMAX);
	printf("inserisci gli elementi di b: \n");
	nb = getlista(b, NMAX);
	nc = filtrodiff(a, b, c, na, nb, nc);
	printf("gli elementi di c sono: %d \n", nc);
	printf("l'array c è: ");
	stampalista(c, nc);
	return 0;
}
