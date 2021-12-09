#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_LEN 40
#define NUM_STR 5
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
char *leggi_stringa(int maxlen)
{
    char *s, *s1;
    int len;
    s = (char *) xmalloc(maxlen+1);
    leggi (s);
    len = strlen(s);
    s1 = xmalloc(len+1);
    strncpy(s1, s, len);
    free(s);
    return s1;
}
void riempi(char **stringhe)
{
    int i;
    for(i = 0; i < NUM_STR; i++)
    {
        printf("inserisci una stringa: ");
        stringhe[i] = leggi_stringa(MAX_LEN+1);
    }
}
char *iniziali(char **stringhe, int len)
{

    char *iniziali = xmalloc(len+1);
    int j = 0;
    for(int i = 0; i < len; i++)
    {
        if(stringhe[i] != NULL && strlen(stringhe[i]) > 0 && isalpha(stringhe[i][0]))
        {
            iniziali[j] = stringhe[i][0];
            j++;
        }
    }
    iniziali[j] = '\0';
    return iniziali;
}
int main()
{
    char **stringhe = xmalloc(sizeof(char*) * NUM_STR); 
    riempi(stringhe);
    char *acronimo = iniziali(stringhe, NUM_STR);
    printf("l'acronimo è: %s\n", acronimo);
    return 0;
}