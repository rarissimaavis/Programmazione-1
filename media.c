#include <stdio.h> 
int main(void)
{
	int contatore, voto;
	float totale, media;
	totale = 0;
	contatore = 1;
	while (contatore <= 10)
	{
		printf("inserisci il voto: ");
		scanf("%d", &voto);
		totale += voto;
		contatore++;
	}
	media = totale/10;
	printf("la media della classe è: %g\n", media);
	return 0;
}
