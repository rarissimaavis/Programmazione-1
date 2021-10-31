#include <stdio.h>
int main(void)
{
	int k;
	k = 1000;
	while (k >= 7)
	{
		if (k%7 == 0)
		{
			printf("%d ", k);
		}
		k--;
	}
	printf("\n");
}


