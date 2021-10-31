#include <stdio.h> 
int main(void)
{
	int prodotto = 2;
	while (prodotto <= 1000)
		prodotto = 2*prodotto;
	printf("la prima potenza > 1000 è %d\n", prodotto);
	return 0;
}
