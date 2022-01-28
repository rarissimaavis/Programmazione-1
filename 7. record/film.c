#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char regista[26];
    char titolo[51];
    char nazione[19];
    int anno;
} Film;
Film *regista(Film elenco[], int n, char *regista, int *resultsize)
{
    int i, j, count = 0;
    Film *result;
    for (i = 0; i < n; i++)
    {
        if (strcmp(regista, elenco[i].regista) == 0)
        {
            count++;
        }
    }
    *resultsize = count;
    result = xmalloc(count * sizeof(Film));
    for (i = 0, j = 0; i < n; i++)
    {
        if (strcmp(regista, elenco[i].regista) == 0)
        {
            result[j] = elenco[i];
            j++;
        }
    }
    return result;
}