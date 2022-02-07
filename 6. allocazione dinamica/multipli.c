int numMultipli(int A[], int n, int val)
{
    int i, counter;
    for (i = 0, counter = 0; i < n; i++)
    {
        if ((A[i]%val) == 0)
        {
            counter++;
        }
    }
    return counter;
}
int *tuttiMultipli(int A[], int n, int val)
{
    int *result;
    int nmultipli,i, j;
    nmultipli = numMultipli(A, n, val);
    if (nmultipli == 0)
    {
        return NULL;
    }
    *result = xmalloc(sizeof(int) *nmultipli);
    for (i = 0, j = 0; i < n; i++)
    {
        if ((A[i]%val) == 0)
        {
            result[j] = A[i];
            j++;
        }
    }
    return result;
}