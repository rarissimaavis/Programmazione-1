char *leggi_stringa(int maxlen)
{
    char *s, *s1;
    int len;
    s = (char *) malloc(maxlen+1);
    if (!s) 
    {
        return NULL;
    }
    leggi (s);
    len = strlen(s);
    s1 = malloc(len+1);
    if (!s)
    {
        free(s);
        return NULL;
    }
    strncpy(s1, s, len);
    free(s);
    return s1;
}