int rect_save_smaller(FILE *savefile, Rect *A, int n, Rect *r0)
{
    Rect *saveus;
    int count, status;
    saveus = rect_smaller(A, n, r0, &count);
    if (count != 0)
    {
        status = fwrite(&saveus[0], sizeof(Rect), count, savefile);
        if (status != count)
        {
            fprintf(stderr, "couldn't save rects. leaving\n");
            exit(-2);
        }
        free(saveus);
    }
    return count;
}