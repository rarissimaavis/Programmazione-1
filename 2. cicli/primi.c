#include <stdio.h>
int primo(unsigned int n)
{
	unsigned int div; //candidato divisore
	if (n<2)
	{
		return 0; //0 e 1 non sono primi
	}
	for (div = 2; div*div < n; div++) //controllo fino alla radice quadrata di n
	{
		if (n % div == 0)
		{
			return 0; //trovato un divisore! numero non primo
		}
	}
	return 1; //nessun divisore! numero primo
}
int main(void)
{
	unsigned int i; //negativi no
	for (i = 0;; i++) //loop infinito: ^C
	{
		if (primo(i))
		{
			printf("%u ", i);
		}
	}
	printf("\n");
	return 0; //non ci arriviamo mai
}	
