#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_LEN 20
#define N_COD 16
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
    printf("nome tizio: ");
    tizio->nome = leggi_stringa(MAX_LEN+1);
    printf("cognome tizio: ");
    tizio->cognome = leggi_stringa(MAX_LEN+1);
    printf("codice tizio: ");
    leggi(tizio->cf);
    return tizio;
}
void codice_valido(char *s)
{
    int valido = 1;
    valido = valido && isalpha(s[0]);
    valido = valido && isalpha(s[1]);
    valido = valido && isalpha(s[2]);
    valido = valido && isalpha(s[3]);
    valido = valido && isalpha(s[4]);
    valido = valido && isalpha(s[5]);
    valido = valido && isdigit(s[6]);
    valido = valido && isdigit(s[7]);
    valido = valido && isalpha(s[8]);
    valido = valido && isdigit(s[9]);
    valido = valido && isdigit(s[10]);
    valido = valido && isalpha(s[11]);
    valido = valido && isdigit(s[12]);
    valido = valido && isdigit(s[13]);
    valido = valido && isdigit(s[14]);
    valido = valido && isalpha(s[15]);
    if (valido == 1)    //formato: LLLLLLCCLCCLCCCL
    {
        printf("\nbravo cuore il tuo codice è valido\n");
    }
    else
    {
        printf("\nao ma che scrivi vedi che è sbagliato\n");
    }
}
int main(void)
{
    persona *persona = NULL;
    persona = inserisci_persona(persona);
    codice_valido(persona->cf);
    return 0;
}