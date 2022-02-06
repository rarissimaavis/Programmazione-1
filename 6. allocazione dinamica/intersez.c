#include <stdio.h>
#include <stdlib.h>
int is_in(int x, int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            return 1;
        }
    }
    return 0;
}
int *intersez(int x[], int sizex, int y[], int sizey, int *newsize)
{
    int i, j, quanti;
    int *result;
    quanti = 0;
    for (i = 0; i < sizex; i++)
    {
        if (is_in(x[i], y, sizey))
        {
            quanti++;
        }
    }
    *newsize = quanti;
    if (quanti == 0)
    {
        return NULL;
    }
    result = xmalloc(quanti * sizeof(int));
    for (i = 0, j = 0; i < sizex; i++)
    {
        if (is_in(x[i], y, sizey))
        {
            result[j++] = x[i];
        }
    }
    return result;
}