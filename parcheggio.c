#include <stdio.h>
int main(void)
{
	int ore, totale;
	printf("inserisci il numero di ore: ");
	scanf("%d", &ore);
	totale = 2+(ore-1)*1;
	printf("il totale da pagare è %d\n", totale);
	return 0;
}
