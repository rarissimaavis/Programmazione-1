double media_negativi(FILE *fin)
{
    double *array, sum = 0.0;
    int i, size, nnegativi = 0;
    array = load_doubles(fin, &size);
    if (array == NULL)
    {
        return 1.0;
    }
    for (i = 0; i < size; i++)
    {
        if (array[i] < 0.0)
        {
            sum += array[i];
            nnegativi++;
        }
    }
    free(array);
    if (nnegativi == 0)
    {
        return 0.0;
    }
    return sum/nnegativi;
}