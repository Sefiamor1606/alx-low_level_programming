#include "main.h"

/**
 * _strncat - Concatenates two strings, using
 *	at most n bytes from the source string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be concatenated from src.
 *
 * Return: Pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
	{
	p++;
	}
	while (*src && n > 0)
	{
	*p++ = *src++;
	n--;
	}
	*p = '\0';
	return (dest);
}

