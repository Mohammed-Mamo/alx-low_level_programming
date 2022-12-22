#include "main.h"
/**
 * _strcat
 *//


char *_strcat(char *dest, char *src)
{
	char *TEMPO;
	TEMPO = dest;
	int i = 0;

	while(dest[i] != '\0')
		dest++;

	while (*src)
		*dest++ = *src++;
return (TEMPO);
}
