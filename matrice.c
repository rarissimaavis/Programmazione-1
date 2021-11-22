#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10
void GetMatrix(int nr, int nc, int m[nr][nc])
{
	int i, j;
	for (i = 0; i < nr; i++)
	{
		for (j = 0; j < nc; j++)
		{
			printf("inserisci l'elemento di posto %d,%d: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
}
void StampaMatrix(int nr, int nc, int m[nr][nc])
{
	int i, j;
	for (i = 0; i < nr; i++)
	{
		for (j = 0; j < nc; j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}
int sommaelem(int nr, int nc, int m[nr][nc])
{
	int somma = 0, i, j;
	for (i = 0; i < nr; i++)
	{
		for ( j= 0; j < nc; j++)
		{
			somma += m[i][j];
		}
	}
	return somma;
}
int massimo(int nr, int nc, int m[nr][nc])
{
	int max = m[0][0], i, j;
	for (i = 0; i < nr; i++)
	{
		for (j = 0; j < nc; j++)
		{
			if (m[i][j] > max)
			{
				max = m[i][j];
			}
		}
	}
	return max;
}
int minimo(int nr, int nc, int m[nr][nc])
{
	int min = m[0][0], i, j;
	for (i = 0; i < nr; i++)
	{
		for (j = 0; j < nc; j++)
		{
			if (m[i][j] < min)
			{
				min = m[i][j];
			}
		}
	}
	return min;
}
int main(void)
{
	int N, M, somma, max, min, m[MAXROW][MAXCOL];
	printf("quante righe ha la matrice? ");
	scanf("%d", &N);
	printf("quante colonne ha la matrice? ");
	scanf("%d", &M);
	if (N > MAXROW || M > MAXCOL)
	{
		printf("numeri non validi\n");
		return 0;
	}
	GetMatrix(N, M, m);
	printf("la matrice è: \n");
	StampaMatrix(N, M, m);
	somma = sommaelem(N, M, m);
	printf("la somma degli elementi  della matrice è: %d\n", somma);
	max = massimo(N, M, m);
	printf("il massimo è: %d\n", max);
	min = minimo(N, M, m);
	printf("il minimo è: %d\n", min);
	return 0;
}
