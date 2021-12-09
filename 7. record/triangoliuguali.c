#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define NUM_LATI 3
typedef struct
{
    double x, y;
} punto;
void punti_nel_piano(punto triang[])
{
    int i;
    for (i = 0; i < NUM_LATI; i++)
    {
        printf("inserisci x del punto %d: ", i+1);
        scanf("%lf", &triang[i].x);
        printf("inserisci y del punto %d: ", i+1);
        scanf("%lf", &triang[i].y);
    }
}
void ordina(double lista[], int n)
{
	int i, k, temp;
	for (i = 0; i < n-1; i++)
    {
        for (k = 0; k < n-1; k++)
        {
		    if (lista[k] > lista[k+1])
		    {
	            temp = lista[k];
	            lista[k] = lista[k+1];
	            lista[k+1] = temp;
		    }
        }
	}
}
double distanza(punto p1, punto p2)
{
    double dist, xdiff, ydiff;
    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;
    dist = sqrt(xdiff*xdiff + ydiff*ydiff);
    return dist;
}
void calcola_lati(punto triang[], double lati_triang[])
{
    for (int i = 0; i < NUM_LATI; i++)
    {
        lati_triang[i] = distanza(triang[i], triang[(i+1)%NUM_LATI]);
    }
}
void confronta(punto triang1[], punto triang2[])
{
    int i;
    double lati_triang1[NUM_LATI], lati_triang2[NUM_LATI];
    calcola_lati(triang1, lati_triang1);
    calcola_lati(triang2, lati_triang2);
    ordina(lati_triang1, NUM_LATI);
    ordina(lati_triang2, NUM_LATI);
    for (i = 0; i < NUM_LATI; i++)
    {
        if (lati_triang1[i] != lati_triang2[i])
        {
            printf("\ntriangoli diversi :(\n");
            exit(-1);
        }
    }
    printf("\ntriangoli gemelliniii :)\n");
}
int main(void)
{
    int uguali;
    double lati_triang1[NUM_LATI], lati_triang2[NUM_LATI];
    punto triang1[NUM_LATI], triang2[NUM_LATI];
    printf("punti del primo triangolo:\n");
    punti_nel_piano(triang1);
    printf("punti del secondo triangolo:\n");
    punti_nel_piano(triang2);
    confronta(triang1, triang2);
}