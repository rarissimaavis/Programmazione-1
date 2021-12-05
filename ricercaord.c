int ricercaord(int a[], int n, int elem) 
{
	int i = 0;
	int trovato = 0;
	while (i < n && !trovato) //visita finalizzata
	{
		if (a[i] >= elem)
		{
			trovato = 1; //permette di uscire dal ciclo
		}
		else
		{
			i++;
		}
	}
	if (i==n || a[i] > elem)
	{
		return -1;
	}
	return (i);
}
