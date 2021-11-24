#include <stdio.h>
#define N 10
int sommacifre(int numero)
{
	int sommacifre = 0;
	while (numero > 0)
	{
		sommacifre += numero%10;
		numero /= 10;
	}
	return sommacifre;
}
int isDaEsame(int numero)
{
	if (sommacifre(numero) == 6)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int filtra_da_esame(int a[], int n)
{
	int daesame = 0, i;
	for (i = 0; i < n; i++)
	{
		if (isDaEsame(a[i]) == 1)
		{
			daesame++;
		}
		else
		{
			a[i] = 0;
		}
	}
	return daesame;
}
void stampalista(int lista[], int n)
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
	int a[N] = {123, 204, 355, 600, 213, 435, 111}, nonnulli;
	nonnulli = filtra_da_esame(a, N);
	printf("gli elementi non nulli di a sono: %d\n", nonnulli);
	printf("la l'array ora è: ");
	stampalista(a, N);
	return 0;
}
	
