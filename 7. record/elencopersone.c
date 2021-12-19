#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 20
#define N_COD 16
#define NUM_PERS 4
typedef struct 
{
    char *nome;
    char *cognome;
    char cf[N_COD+1];
} persona;
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
persona *inserisci_persona(persona *tizio)
{
    tizio = xmalloc(sizeof(persona));
    printf("nome: ");
    tizio->nome = leggi_stringa(MAX_LEN+1);
    printf("cognome: ");
    tizio->cognome = leggi_stringa(MAX_LEN+1);
    printf("codice fiscale: ");
    leggi(tizio->cf);
    return tizio;
}
persona **riempi_elenco(persona **tizi)
{
    tizi = (persona **) xmalloc(sizeof(persona) * NUM_PERS);
    for (int i = 0; i < NUM_PERS; i++)
    {
        printf("utente %d:\n", i+1);
        tizi[i] = inserisci_persona(tizi[i]);
        printf("\n");
    }
    return tizi;
}
void stampa_elenco(persona **tizi)
{
    printf("\nl'elenco è composto da:\n");
    for (int i=0; i < NUM_PERS; i++)
    {
        printf("%d. %s %s %s\n", i+1, tizi[i]->nome, tizi[i]->cognome, tizi[i]->cf);
    }
}
void cerca_nome_e_cognome(persona **tizi)
{
    int i;
    char nome[MAX_LEN+1], cognome[MAX_LEN+1];
    printf("\nRicerca per nome e cognome\ninserisci il nome da cercare: ");
    leggi(nome);
    printf("inserisci il cognome da cercare: ");
    leggi(cognome);
    for (i = 0; i < NUM_PERS; i++)
    {
        if (strcmp(tizi[i]->nome, nome) == 0 && strcmp(tizi[i]->cognome, cognome) == 0)
        {
            printf("\nutente trovato! :) il suo codice fiscale è: %s\n", tizi[i]->cf);
            break;
        }
    }
    if (i == NUM_PERS)
    {
        printf("\nutente non presente in elenco :(\n");
    }
}
void cerca_cf(persona **tizi)
{
    int i;
    char cf[N_COD+1];
    printf("\nRicerca per codice fiscale\ninserisci il codice fiscale da cercare: ");
    leggi(cf);
    for (i = 0; i < NUM_PERS; i++)
    {
        if (strcmp(tizi[i]->cf, cf) == 0)
        {
            printf("\nutente trovato! :) si chiama: %s %s\n", tizi[i]->nome, tizi[i]->cognome);
            break;
        }
    }
    if (i == NUM_PERS)
    {
        printf("\nutente non presente in elenco :(\n");
    }
}
void stampa_cognomi(persona **tizi)
{
    int i;
    char cognome[MAX_LEN+1];
    printf("\nSottoelenco per cognome\ninserisci il cognome da cercare: ");
    leggi(cognome);
    printf("\nutenti corrispondenti:\n");
    for (i = 0; i < NUM_PERS; i++)
    {
        if (strcmp(tizi[i]->cognome, cognome) == 0) 
        {
            printf("%d. %s %s %s \n", i+1, tizi[i]->nome, tizi[i]->cognome, tizi[i]->cf);
        }
    }
}
int main(void)
{
    persona **persone;
    persone = riempi_elenco(persone);
    stampa_elenco(persone);
    cerca_nome_e_cognome(persone);
    cerca_cf(persone);
    stampa_cognomi(persone);
    return 0;
}