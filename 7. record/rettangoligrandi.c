#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    double x;
    double y;
    double h;
    double w;
} Rect;
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
double area(Rect *r)
{
    return r->w * r->h;
}
Rect *rettangoli_grandi(Rect *a, int n, double areamin, int *ngrandi)
{
    Rect *grandi;
    int i, j;
    for (i = 0, *ngrandi = 0; i < n; i++)
    {
        if (area(&a[i]) > areamin)
        {
            *ngrandi++;
        }
    }
    if (*ngrandi == 0)
    {
        return NULL;
    }
    grandi = xmalloc(*ngrandi * sizeof(Rect));
    for (i = 0, j = 0; i < n; i++)
    {
        if (area(&a[i]) > areamin)
        {
            grandi[j].x = a[i].x;
            grandi[j].y = a[i].y;
            grandi[j].w = a[i].w;
            grandi[j].h = a[i].h;
            j++
        }
    }
    return grandi;
}