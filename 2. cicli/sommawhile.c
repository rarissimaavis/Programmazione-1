#include <stdio.h>
int main(void)
{
	int n, somma=0, counter; 
	printf("quanti numeri pari desideri sommare? ");
	scanf("%d", &n);
	counter = 1;
	while (counter<=n)
	{
		somma += 2*counter; 
		counter++;
	}
	printf("la somma dei primi %d numeri pari è %d\n", n, somma);
	return 0;
}
