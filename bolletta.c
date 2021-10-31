#include <stdio.h>
#define costounit 0.13
int main(void)
{
	int codiceutente;
	float KWhprec, KWhatt, KWh, canone, bolletta;
	printf("lettura precedente: ");
	scanf("%f", &KWhprec);
	printf("lettura attuale: ");
	scanf("%f", &KWhatt);
	KWh = KWhatt-KWhprec;
	printf("i KWh da addebitare sono %g \n", KWh);
	printf("la quota fissa è: ");
	scanf("%f", &canone);
	bolletta = canone+KWh*costounit;
	printf("l'ammontare della bolletta è %g \n", bolletta);
}
