int *elementi_minori(int A[], int n, int val, int *newsize)
{
    int i, j, n_minori, *new_array;
    n_minori = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] < val)
        {
            n_minori++;
        }
    }
    *newsize = n_minori;
    if (n_minori == 0)
    {
        return NULL;
    }
    new_array = xmalloc(n_minori * sizeof(int));
    for (i = 0, j = 0; i < n; i++)
    {
        if (A[i] < val)
        {
            new_array[j++] = A[i];
        }
    }
    return new_array;
}
void error_fwrite(int a, int b)
{
    fprintf(stderr, "fwrite() failed in salva_minori() size=%d, nobj=%d\n", a, b);
    exit(-2);
}
void salva_minori(FILE *fout, int A[], int n, int val)
{
    int *minori, size;
    size_t write_status;
    write_status = fwrite(&val, sizeof(int), 1, fout);
    if (write_status != 1)
    {
        error_fwrite(sizeof(int), 1);
    }
    write_status = fwrite(&size, sizeof(int), 1, fout);
    if (write_status != 1)
    {
        error_fwrite(sizeof(int, 1));
    }
    minori = elementi_minori(A, n, val, &size);
    if (minori == NULL)
    {
        return NULL;
    }
    write_status = frite(minori, sizeof(int), size, fout);
    if (write_status != size)
    {
        error_fwrite(sizeof(int), size);
    }
    fclose(fout);
}