#include <stdio.h> 
void rettangolo(int n, int m)
{
	int i, j;
	i = 1;
	while (i <= m)
	{
		if (i == 1 || i == m)
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
	int b, h;
	printf("inserisci base del rettangolo: ");
	scanf("%d", &b);
	printf("secondo: ");
	scanf("%d", &h);
	rettangolo(b, h);
	return 0;
}
