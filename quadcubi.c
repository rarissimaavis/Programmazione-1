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
int quadrato(int n)
{
	int n2;
	n2 = n*n;
	return n2;
}
int cubo(int n)
{
	int n3;
	n3 = n*n*n;
	return n3;
}
void riempiarrayb(int lista1[], int lista2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		lista2[i] = quadrato(lista1[i]);
	}
}
void riempiarrayc(int lista1[], int lista2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		lista2[i] = cubo(lista1[i]);
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

		
