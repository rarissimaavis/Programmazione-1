#include <stdio.h>
#define NMAX 10
int getlista(int lista[], int n)
{
	int i, val;
	printf("inserisci gli elementi dell'array (-1 per terminare):\n");
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
void stringicoppie(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i+1] > a[i])
		{
			a[i]++;
			a[i+1] -= 2;
		}
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
	int a[NMAX], n;
	n = getlista(a, NMAX);
	stringicoppie(a, n);
	printf("l'array modificato è: ");
	stampalista(a, n);
	return 0;
}
