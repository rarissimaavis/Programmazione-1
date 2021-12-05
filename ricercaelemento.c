int ricerca(int a[], int n, int elem) 
{
	int i = 0;  //indice dell'array
	while (i < n)	//visita finalizzata
	{
		if (a[i] == elem)
		{
			break;	//esce dal ciclo se trova elem
		}
		else
		{
			i++;
		}
	}
	if (i == n)
	{
		return(-1);  //se non trovato restituisce -1
	}
	return(i);	//altrimenti la pos dell'elem
}
