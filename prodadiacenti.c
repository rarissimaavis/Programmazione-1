#include <stdio.h>
#define N 8
int getlista(double lista[], int n)
{
	int i;
	double val;
	printf("inserisci gli elementi (-1 per terminar): \n");
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &val);
		if (val == -1)
		{
			break;
		}
		lista[i] = val;
	}
	return i;
}
int prodadiacenti(double sorg[], double dest[], int n)
{
	int i, j = 0;
	for (i = 0; i < n; i = i+2)
	{
		dest[j] = sorg [i] * sorg [i+1];
		j++;
	}
	return j;
}
void stampalista(double lista[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%g ", lista[i]);
	}
	printf("\n");
}
int main(void)
{
	double sorg[N], dest[N];
	int nsorg, ndest;
	nsorg = getlista(sorg, N);
	if (nsorg%2 != 0)
	{	
		printf("il numero di elementi di sorg deve essere pari\n");
		return 0;
	}
	ndest = prodadiacenti(sorg, dest, nsorg);
	printf("l'array costruito è: ");
	stampalista(dest, ndest);
	return 0;
}
