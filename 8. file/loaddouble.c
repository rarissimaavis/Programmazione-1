#include <stdio.h>
#include <stdlib.h>
double *load_doubles(FILE *fp, int *n)
{
    int size, status;
    double *result;
    status = fread(&size, sizeof(int), 1, fp);
    if (status != 1)
    {
        fprintf(stderr, "fread failed\n");
        return NULL;
    }
    result = xmalloc(sizeof(double) * size);
    status = fread(result, sizeof(double), size, fp);
    if (status != size)
    {
        fprintf(stderr, "fread failed\n");
        return NULL;
    }
    *n =size;
    return result;
}