#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int primadi(char *fname, char *spartiacque, char *a[], int sizea)
{
    int i, scritte = 0;
    FILE *fout;
    fout = fopen(fname, "w");
    if (fout == NULL)
    {
        fprintf(stderr, "can't open %s for writing. \n", fname);
        exit(2);
    }
    for (i = 0; i < sizea; i++)
    {
        if (strcmp(a[i], spartiacque) < 0)
        {
            fprintf(fout, "%s\n", a[i]);
            scritte++;
        }
    }
    fprintf(fout, "END\n");
    fclose(fout);
    return scritte;
}