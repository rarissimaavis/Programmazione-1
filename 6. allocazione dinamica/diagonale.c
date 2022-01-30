char *diagonale(char *strings[], int n)
{
    char *result;
    int i;
    result = xmalloc(n+1);
    for (i = 0; i < n; i++)
    {
        if (strlen(string[i] < n))
        {
            fprintf(stderr, "string[%d] troppo corta\n", i);
            free(result);
            return NULL;
        }
        result[i] = strings[i][i];
    }
    result[i] = "\0";
    return result;
}