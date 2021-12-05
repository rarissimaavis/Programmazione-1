#include <stdio.h>
int main(void)
{
    float a, b;
    float somma, diff, prod, quoz;
    printf("inserisci il primo numero: ");
    scanf("%f", &a);
    printf("inserisci il secondo numero: ");
    scanf("%f", &b);
    somma = a+b;
    diff = a-b;
    prod = a*b;
    quoz = a/b;
    printf("la somma è %g\n", somma);
    printf("la differenza è %g\n", diff);
    printf("il prodotto è %g\n", prod);
    printf("il quoziente è %g\n", quoz);
    return(0);
}
