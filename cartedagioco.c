#include <stdio.h>
int main(void)
{
	int carta;
	printf("Asso ");
	for (carta = 13; carta > 1; carta--)
	{
		switch(carta)
		{
			case 13: printf("Re "); break;
			case 12: printf("Regina "); break;
			case 11: printf("Fante "); break;
			default: printf("%d ", carta);
		}
	}
	printf("\n");
	return 0;
}
