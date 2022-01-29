#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nickname[50];
    int punteggio;
    struct giocatore *next;
} Giocatore;
int salva(FILE *fout, char lettera, Giocatore players[], int nplayers)
{
    int i, salvati, status;
    salvati = 0;
    for (i = 0; i < nplayers; i++)
    {
        if (players[i].nickname[0] == lettera)
        {
            status = fwrite(&players[i], sizeof(Giocatore), 1, fout);
            if (status != 1)
            {
                fprintf(stderr, "problem saving item %d\n", i);
                exit(1);
            }
            salvati++;
        }
    }
    fclose(fout);
    return salvati;
}