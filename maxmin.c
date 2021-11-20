#include <stdio.h>
#define N 10
void maxmin(int a[], int n, int *max, int *min)
{
	int i;
	*max = *min = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > *max)
		{
			*max = a[i];
		}
		else if (a[i] < *min)
		{
			*min = a[i];
		}
	}
}
int main (void)
{
	int b[N], i, massimo, minimo;
	printf("inserisci %d numeri: \n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &b[i]);
	}
	maxmin(b, N, &massimo, &minimo);
	printf("massimo: %d\n", massimo);
	printf("minimo: %d\n", minimo);
	return 0;
}
