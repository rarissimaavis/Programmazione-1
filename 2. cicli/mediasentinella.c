#include <stdio.h> 
int main(void)
{
	int contatore, voto;
	float totale, media;
	totale = 0;
	contatore = 0;
	while (voto != -1)
	{
		printf("inserisci il voto: ");
		scanf("%d", &voto);
		if ((voto >= 18 && voto <= 30) || voto == 33)
		{
			totale += voto;
			contatore++;
		}
		else if (voto == -1)
		{
			printf("calcolo...\n");
		}
		else 
		{
			printf("valore non ammesso\n");
		}
	}
	media = totale/contatore;
	printf("la media della classe è: %g\n", media);
	return 0;
}
