int copia_nuovi(FILE *fin, int nlibri, FILE *fout, int anno0)
{
    Libro *tuttilibri, *nuovilibri;
    int ncopiati, nletti, nnuovi;
    tuttilibri = xmalloc(sizeof(Libro) * nlibri);
    nletti = fread(tuttilibri, sizeof(Libro), nlibri, fin);
    if (nletti != nlibri)
    {
        fprintf(stderr, "Letti %d libri anziche' %d. \n", nletti, nlibri);
    }
    nuovilibri = libri_nuovi(tuttilibri, nletti, anno0, &nnuovi);
    ncopiati = fwrite(nuovilibri, sizeof(Libro), nnuovi, fout);
    if (ncopiati != nnuovi)
    {
        fprintf(stderr, "Copiati %d libri anzichè %d. \n", ncopiati, nnuovi);
    }
    free(tuttilibri);
    free(nuovilibri);
    fclose(fin);
    fclose(fout);
    return ncopiati;
}