#include <stdio.h>
void triangolo(int h)
{
	int i, j, k;
	for(i = 1; i <= h; i++)
	{
		for(j = 1; j <= h-i; j++)
		{
			printf(" ");
		}
		for(k = 1; k <= 2*i-1; k++)
		{
			printf("*");
		}
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
