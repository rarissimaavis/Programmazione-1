int ricercabin(int a[], int n, int elem)
{
	int h, k, p;
	int trovato = 0;
	h = 0;
	k = n-1;	//estremi dell'intervallo in cui cercare
	while (h <= k && !trovato) 
	{
		p = (h+k)/2;	//posizione centrale
		if (a[p] == elem)
		{
			trovato = 1;	//esce dal ciclo
		}
		else if (a[p] > elem)
		{
			k = p-1;	//la ricerca continua nella prima metà
		}
		else
		{
			h = p+1;	//la ricerca continua nella seconda metà
		}
	}
	if (!trovato)
	{
		p = .1;
	}
	return (p);
}
