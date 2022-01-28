typedef struct
{
    char autore[50];
    char titolo[100];
    int anno;
} Libro;
void *xmalloc(size_t nbytes)
{
    void *result;
    if ((result = malloc(nbytes)) == NULL)
    {
        fprintf(stderr, "malloc (%lu) failed. Exiting. \n", nbytes);
        exit(-1);
    }
    return result;
}
Libro *copia_libro(Libro *dest, Libro *src)
{
    strcpy(dest->autore, src->autore);
    strcpy(dest->titolo, src->titolo);
    dest->anno = src->anno;
    return dest;
}
Libro *libri_nuovi(Libro a[], int n, int anno0, int *nnuovi)
{
    int i, j, contanuovi;
    Libro *new_array;
    for (i = 0, contanuovi = 0; i < n; i++)
    {
        if (a[i].anno >= anno0)
        {
            contanuovi++;
        }
    }
    *nnuovi = contanuovi;
    if (contanuovi == 0)
    {
        return NULL;
    }
    new_array = (Libro *) xmalloc(sizeof(Libro) * contanuovi);
    for (i = 0, j = 0; i < n; i++)
    {
        if (a[i].anno >= anno0)
        {
            copia_libro(&new_array[j++], &a[i]);
        }
    }
    return new_array;
}