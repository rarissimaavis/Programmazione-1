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

void *xmalloc(size_t nbytes) 
{
    void *result;
    if ((result = malloc(nbytes)) == NULL)
    {
        fprintf(stderr, "malloc(%lu) failed. Exiting.\n", nbytes);
        exit(-1);
    }
    return result;
}