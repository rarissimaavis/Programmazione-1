#include <stdio.h>
#include <string.h>
#define STR_LEN 20
int leggi(char *s, int maxlen)
{
	int len;
	printf("inserisci la stringa: ");
	fgets(s, maxlen, stdin);
	len = strlen(s);
	if (len < maxlen)
	{
		s[len-1] = '\0';
	}
	return len;
}
char *confronta_postfisso(char s1[], char s2[], int len1, int len2)
{
	int d;
	d = len2 - len1;
	if (d < 0)
	{
		return NULL;
	}
	if (strcmp(s1, s2+d) == 0)	//sono uguali
	{
		return s2+d;	//inizio postfisso
	}
	else
	{
		return NULL;
	}
}
void stampa(char s1[], char s2[], char *p)
{
	if (p == NULL)
	{
		printf("%s non è postfisso di %s", s1, s2);
	}
	else
	{
		printf("%s è postfisso di %s", p, s2);
	}
	printf("\n");
}
int main(void)
{
	int len1, len2;
	char *p, s1[STR_LEN+1], s2[STR_LEN+1];
	len1 = leggi(s1, STR_LEN);
	len2 = leggi(s2, STR_LEN);
	p = confronta_postfisso(s1, s2, len1, len2);
	stampa(s1, s2, p);
	return 0;
}
