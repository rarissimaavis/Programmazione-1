#include <stdio.h>
int bisestile(int anno)
{
	if (anno%400==0 || (anno%4==0 && anno%100!=0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	int anno;
	anno = 1600;
	while (anno <= 10000)
	{
		if (bisestile(anno))
		{
			printf("%d ", anno);
		}
		anno += 4;
	}
	printf("\n");
}
