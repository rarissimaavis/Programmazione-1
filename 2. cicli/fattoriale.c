#include <stdio.h> 
int main(void)
{
	int n, fatt;
	do
	{
		printf("questo programma determina il fattoriale di un numero.\n");
		printf("inserisci un numero intero >= 0 (-1 per terminare)\n");
		scanf("%d", &n);
		for(fatt = 1; n >=1 ; n--)
			fatt = fatt*n;
			printf("il fattoriale è %d\n", fatt);
	}
	while (n != -1);
	return 0;
}
