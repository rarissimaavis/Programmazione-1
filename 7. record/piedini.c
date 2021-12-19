#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 50
#define NUM_P 3
typedef struct 
{
    char *forma;
    char *num_dita;
    char *num_scarpe;
} piedi;
void leggi(char s[])
{
    int len;
    fgets(s, MAX_LEN+1, stdin);
    len = strlen(s);
    if (s[len-1] == '\n')
    {
        s[len-1] = '\0';
    }
}
void *xmalloc(size_t nbytes)
{
    void *p;
    p = malloc(nbytes);
    if (p == NULL)
    {
        printf("errore!");
        exit(-1);
    }
    return p;
}
char *leggi_stringa(int maxlen)
{
    char *s, *s1;
    int len;
    s = (char *) xmalloc(maxlen+1);
    leggi(s);
    len = strlen(s);
    s1 = xmalloc(len+1);
    strncpy(s1, s, len);
    free(s);
    return s1;
}
piedi *inserisci_piedi(piedi *dea)
{
    dea = xmalloc(sizeof(piedi));
    printf("forma: ");
    dea->forma = leggi_stringa(MAX_LEN+1);
    printf("numero dita: ");
    dea->num_dita = leggi_stringa(MAX_LEN+1);
    printf("numero scarpe: ");
    dea->num_scarpe = leggi_stringa(MAX_LEN+1);
    return dea;
}
piedi **elenco_piedi(piedi **regine)
{
    regine = (piedi **) xmalloc(sizeof(piedi) * NUM_P);
    for (int i = 0; i < NUM_P; i++)
    {
        printf("piedi della Dea %d:\n", i+1);
        regine[i] = inserisci_piedi(regine[i]);
        printf("\n");
    }
    return regine;
}
void stampa_piedi(piedi **fate)
{
    printf("I piedi disponibili sono: \n");
    for (int i = 0; i < NUM_P; i++)
    {
        printf("%d. %s, %s dita, %s\n", i+1, fate[i]->forma, fate[i]->num_dita, fate[i]->num_scarpe);
    }
}
void cerca_forma_piedi(piedi **principesse)
{
    int i;
    char forma[MAX_LEN+1];
    printf("\nRicerca per forma\nChe forma desideri? ");
    leggi(forma);
    for (i = 0; i < NUM_P; i++)
    {
        if (strcmp(principesse[i]->forma, forma) == 0)
        {
            printf("\npiedi perfetti per essere calpestati! ecco i tuoi piedini: %s, %s dita, %s\n", principesse[i]->forma, principesse[i]->num_dita, principesse[i]->num_scarpe);
            break;
        }
    }
    if (i == NUM_P)
    {
        printf("\nmi disp bro niente piedi :(\n");
    }
}
void cerca_num_dita(piedi **mamme)
{
    int i;
    char num_dita[MAX_LEN+1];
    printf("\nRicerca per numero di dita\nQuante dita dovrebbe avere il tuo piede ideale? ");
    leggi(num_dita);
    for (i = 0; i < NUM_P; i++)
    {
        if (strcmp(mamme[i]->num_dita, num_dita) == 0)
        {
            printf("\nnumero perfetto di dita da leccare! ecco i tuoi piedini: %s, %s dita, %s\n", mamme[i]->forma, mamme[i]->num_dita, mamme[i]->num_scarpe);
            break;
        }
    }
    if (i == NUM_P)
    {
        printf("\nmi disp bro niente piedi :(\n");
    }
}
void cerca_num_scarpe(piedi **angeli)
{
    int i;
    char num_scarpe[MAX_LEN+1];
    printf("\nRicerca per numero di scarpe\nQuanto grandi li cerchi? ");
    leggi(num_scarpe);
    for (i = 0; i < NUM_P; i++)
    {
        if (strcmp(angeli[i]->num_scarpe, num_scarpe) == 0)
        {
            printf("\ndavvero riesci a farli entrare? buona fortuna! ecco i tuoi piedini: %s, %s dita, %s\n", angeli[i]->forma, angeli[i]->num_dita, angeli[i]->num_scarpe);
            break;
        }
    }
    if (i == NUM_P)
    {
        printf("\nmi disp bro niente piedi :(\n");
    }
}
int main(void)
{
    piedi **tizie;
    printf("Inserisci dati piedi\n\n");
    tizie = elenco_piedi(tizie);
    printf("\nCiao re dei piedi :)\n");
    stampa_piedi(tizie);
    cerca_forma_piedi(tizie);
    cerca_num_dita(tizie);
    cerca_num_scarpe(tizie);
    return 0;
}