typedef struct
{
    double x;
    double y;
    double w;
    double h;
}
void *xmalloc(size_t nbytes)
{
    void *result;
    if ((result = malloc(nbytes)) == NULL)
    {
        fprintf(stderr, "malloc(%lu) failed. Exiting. \n", nbytes);
        exit(-1);
    }
    return result;
}
double area(Rect *r)
{
    return r->w * r->h;
}
int rect_cmp(Rect *r1, Rect *r2)
{
    double diff;
    diff = area(r1) - area(r2);
    if (diff > 0)
    {
        return 1;
    }
    else if (diff < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
Rect *rect_cpy(Rect *dest, Rect *src)
{
    dest->x = src->x;
    dest->y = src->y;
    dest->w = src->w;
    dest->h = src->h;
}
Rect *rect_smaller(Rect *A, int n, Rect *toobig, int *newsize)
{
    int i, j, count = 0;
    Rect *result;
    for (i = 0; i < n; i++)
    {
        if (rect_cmp(&A[i], toobig) == 1)
        {
            count++;
        }
    }
    *newsize = count;
    if (count == 0)
    {
        return NULL;
    }
    result = xmalloc(sizeof(Rect) * count);
    for (i = 0, j = 0; i < n; i++)
    {
        if (rect_cmp(&A[i], toobig) == 1)
        {
            rect_cpy(&result[j], &A[i]);
            j++;
        }
    }
    return result;
}