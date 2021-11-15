#include <stdio.h>
#define righe 11
#define colonne 11

void stampatavola(int pit[righe][colonne], int nr, int nc)
{
	int i, j;
	for (i = 1; i < nr; i++)
	{
		for (j = 1; j < nc; j++)
		{
			printf("%d\t", pit[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int i, j, pit[righe][colonne];
	for (i = 1; i < righe; i++)
	{
		for (j = 1; j < colonne; j++)
		{
			pit[i][j] = i*j;
		}
	}
	printf("Tavola pitagorica:\n");
	stampatavola(pit, righe, colonne);
	return 0;
}
