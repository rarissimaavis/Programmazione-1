#include <stdio.h> 
void quadrato_vuoto(int n)
{
	int i, j;
	i = 1;
	while (i <= n)
	{
		if (i == 1 || i == n)
		{
			j = 1;
			while (j <= n)
			{
				printf("*");
				j++;
			}
		}
		else
		{
			j = 1;
			while (j <= n)
			{
				if (j == 1 || j == n)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				j++;
			}
		}
		i++;
		printf("\n");
	}
}

int main(void)
{
	int lato;
	printf("lato del quadrato? ");
	scanf("%d", &lato);
	quadrato_vuoto(lato);
	return 0;
}
