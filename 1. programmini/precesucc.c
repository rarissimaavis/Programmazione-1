/*stampa precedente e successivo*/
#include <stdio.h>
int main(void)
{
	int n;
	int prec, succ;
	printf("inserisci il numero: ");
	scanf("%d", &n);
	prec = n-1;
	succ = n+1;
	printf("il numero precedente a %d è %d\n", n, prec);
	printf("il numero successivo a %d è %d\n", n, succ);
	return 0;
}
