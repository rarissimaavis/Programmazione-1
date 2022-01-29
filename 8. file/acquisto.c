#include <stdio.h>
typedef struct
{
    char descrizione[30];
    double quantita;
    double prezzo_unitario;
} Acquisto;
Acquisto *leggi_acquisti(FILE *fin, int *n_acquisti)
{
    int n, i;
    Acquisto *result;
    fscanf(fin, "%d", &n);
    result = xmalloc(sizeof(Acquisto) * n);
    for (i = 0; i < n; i++)
    {
        fscanf(fin, "%s", result[i].descrizione);
        fscanf(fin, "%lf", &result[i].quantita);
        fscanf(fin, "%ld", &result[i].prezzo_unitario);
    }
    *n_acquisti = n;
    return result;
}
double subtotale(Acquisto *p)
{
    return p->quantita * p->prezzo unitario;
}
double spesa_totale(Acquisto scontrino[], int n)
{
    double tot = 0.0;
    for (int i = 0; i < n; i++)
    {
        tot += subtotale(&scontrino[i]);
    }
    return tot;
}