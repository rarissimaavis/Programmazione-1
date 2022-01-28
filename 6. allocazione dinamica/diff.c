#include <stdio.h>
#include <stdlib.h>
double *differenze(double x[], int size)
{
    int i;
    double *diffs;
    diffs = malloc(sizeof(double) * (size-1));
    if (diffs == NULL)
    {
        fprintf(stderr, "malloc(%d) failed\n", sizeof(double) * (size-1));
        exit(1);
    }
    for (i = 0; i < size; i++)
    {
        diffs[i] = x[i] - x[i+1];
    }
    return diffs;
}