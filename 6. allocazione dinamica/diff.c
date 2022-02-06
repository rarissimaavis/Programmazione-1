#include <stdio.h>
#include <stdlib.h>
double *differenze(double x[], int size)
{
    int i;
    double *diffs;
    diffs = xmalloc(sizeof(double) * (size-1));
    for (i = 0; i < size; i++)
    {
        diffs[i] = x[i] - x[i+1];
    }
    return diffs;
}