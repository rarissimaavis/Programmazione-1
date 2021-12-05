#include <stdio.h>
#include <string.h>
#define STR_LEN 50
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
void minus_maius(char s[], int len)
{
    int i, offset;
    offset = 'a' - 'A';
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += offset;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
        	s[i] -= offset;
        }
    }
}
int main(void)
{
	int len;
	char s[STR_LEN+1];
	len = leggi(s, STR_LEN);
	minus_maius(s, len);
	printf("la stringa modificata è %s\n", s);
	return 0;
}
        	
