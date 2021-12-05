#include <stdio.h> 
#define NMAX 10
int leggivett(int A[], int max)
{
	int i, val;
	printf("inserisci i valori (-1 per terminare): \n");
	while (i < max)
	{
		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}
		A[i] = val;
		i++;
	}
	return i;
}
int sommacubicifre(int num)
{
	int cifra1, cifra2, cifra3, sommacubi;
	cifra1 = num%10;
	num /= 10;
	cifra2 = num%10;
	cifra3 = num/10;
	sommacubi = cifra1*cifra1*cifra1 + cifra2*cifra2*cifra2 + cifra3*cifra3*cifra3;
	return sommacubi;
}	
int armstrong(int num)
{
	int sommacubi;
	if (num < 100 || num > 999)
	{
		return 0;	//numero non di 3 cifre
	}
	sommacubi = sommacubicifre(num);
	if (sommacubi == num)
	{
		return 1;	//numero di Armstrong 
	}
	else
	{
		return 0;
	}
}
void azzera(int A[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (!armstrong(A[i]))
		{
			A[i] = 0;	//azzera i valori che non sono numeri di Armstrong
		}
	}
}
void stampavett(int A[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (A[i] != 0)	//stampa valori non nulli
		{
			printf("%d ", A[i]);
		}
	}
}
int main(void)
{
	int A[NMAX], n;
	n = leggivett(A, NMAX);
	azzera(A, n);
	printf("sono numeri di Armstrong: ");
	stampavett(A, n);
	printf("\n");
	return 0;
}
		
