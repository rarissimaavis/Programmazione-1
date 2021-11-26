#include <stdio.h>
#define NMAX 10
int getlista(int lista[], int n)
{	
	int i, val;
	printf("insetrisci gli elementi (-1 per terminare): \n");
	for (i = 0; i < NMAX; i++)
	{
		scanf("%d", &val);
		if (val == -1)
		{	
			break;
		}
		lista[i] = val;
	}
	return i;
}
int isDispari(int num)
{
	if (num%2 == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isResto1(int num)
{	
	if (num%3 == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isInteressante(int num)
{
	if (isDispari(num) == 1 && isResto1(num) == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int cancella_noiosi(int a[], int n)
{    
    int i = 0, j, n_interessanti = 0;
    while (i < n)
    {
        if (isInteressante(a[i]) == 1)
        {
            n_interessanti++;
            i++;
        }
        else
        {
            for (j = i; j < n; j++)
            {
                a[j] = a[j+1];
            }
            n--;
        }
    }
	return n_interessanti;
}
void stampalista(int lista[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", lista[i]);
	}
	printf("\n");
}
int main(void)
{
	int a[NMAX], n, nfin;
	n = getlista(a, NMAX);
	nfin = cancella_noiosi(a, n);
	printf("i numeri interessanti sono: %d, cioè ", nfin);
	stampalista(a, nfin);
	return 0;
}
