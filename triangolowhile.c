#include <stdio.h>
void triangolo(int h)
{
	int i, j, k;
	i = 1;
	while (i <= h)
	{
		j = 1;
		while (j <= h-i)
		{
			printf(" ");
			j++;
		}
		k = 1; 
		while (k <= 2*i-1)
		{
			printf("*");
			k++;
		}
		i++;
		printf("\n");
	}
}

int main(void)
{
	int h;
	printf("inserisci l'altezza del triangolo: ");
	scanf("%d", &h);
	triangolo(h);
	return 0;
}
