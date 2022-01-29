Film *fsubelenco(FILE *fileelenco, char *regista, int *resultsize)
{
    int i, j, count = 0;
    Film *result, buff;
    while (fread(&buff, sizeof(Film), 1, fileelenco) == 1)
    {
        if (strcmp(regista, buff.regista) == 0)
        {
            counter++;
        }
    }
    *resultsize = counter;
    result = xmalloc(sizeof(Film) * counter);
    rewind(fileelenco);
    j = 0;
    while (fread(&buff, sizeof(Film), 1, fileelenco) == 1)
    {
        if (strcmp(regista, buff.regista) == 0)
        {
            result[j] = buff;
            j++;
        }
    }
    fclose(fileelenco);
    return result;
}