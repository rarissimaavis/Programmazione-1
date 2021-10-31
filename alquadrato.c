#include <stdio.h>
float quadrato(float); //prototipo

int main(void)
{
	float x;
	printf("inserisci il valore di x: ");
	scanf("%f", &x);
	printf("il quadrato di %g è %g\n", x, quadrato(x));
	return 0;
}
	
float quadrato(float x)
{ 
	float x2;
	x2 = x*x;
	return x2;
}
