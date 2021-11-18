#include <stdio.h>
#define N 7
#define M 8
void GetListaA(int lista[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &lista[i]);
	}
}
void GetListaB(int lista[])
{
	int i;
	for (i = 0; i < M; i++)
	{
		scanf("%d", &lista[i]);
	}
}
int ricerca(int a[], int x, int elem) 
{
	int i; 
	for (i = 0; i < x; i++)
	{
		if (a[i] == elem)
		{
			return(i);	
		}
	}
	return -1;
}
int elimina(int lista[], int y, int pos)
{
	int i;
	for (i = pos; i < y-1; i++)
	{
		lista[i] = lista[i+1]; //shift a sinistra
	}
	return y-1;
}
int differenza(int listaA[], int listaB[], int n, int m) 
{
	int i=0, j;
	while (i < n)
	{
		if (ricerca(listaA, n, listaB[i]) == -1)
		{
			i++;
		}
		else
		{
			m = elimina(listaB, m, i);
		}
	}
	return m;
}
void StampaLista(int lista[], int d)
{
	int i;
	for (i = 0; i < d; i++)
	{
		printf("%d ", lista[i]);
	}
}
int main(void)
{
	int listaA[N], listaB[M], d;
	printf("inserisci i valori della lista A:\n");
	GetListaA(listaA);
	printf("inserisci i valori della lista B:\n");
	GetListaB(listaB);
	d = differenza(listaA,listaB, N, M);
	StampaLista(listaB, d);
	printf("\n");
	return 0;
}	

