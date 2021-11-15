void input_array(int a[RMAX][CMAX], int nr, int nc)
{
	int i, j;
	for (i = 0; i < nr; i++)
	{
		for (j = 0; j < nc; j++)
		{
			printf("a[%d][%d]: i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void output_array(int a[RMAX][CMAX], int nr, int nc)
{
	int i, j;
	for (i = 0; i < nr; i++)
	{
		for (j = 0; j < nc; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
