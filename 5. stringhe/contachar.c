#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define STR_LEN 50
void leggi(char *s, int maxlen)
{
	int len;
	printf("inserisci la stringa: ");
	fgets(s, maxlen, stdin);
	len = strlen(s);
	if (len < maxlen)
	{
		s[len-1] = '\0';
	}
}
int offset(char c)
{
	int offset = 'a' - 'A';
	if (c >= 'A' && c <= 'Z')
	{
		return c + offset;	//se c è maiuscolo restituisce c minuscolo
	}
	else if (c >= 'a' && c <= 'z')
	{
		return c - offset;	//se c è minuscolo restituisce c maiuscolo
	}
}
int conta_char(char s[], char c)
{
	int i, c_off, cont = 0;
	if (!isalpha(c))
	{
		return 0;
	}
	c_off = offset(c);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i] || c_off == s[i])
		{
			cont++;
		}
	}
	return cont;
}
int main(void)
{
	int cont, len;
	char c, s[STR_LEN+1];
	leggi(s, STR_LEN+1);
	printf("inserisci un carattere: ");
	scanf("%c", &c);
	cont = conta_char(s, c);
	printf("le occorrenze di %c sono %d\n", c, cont);
	return 0;
}
