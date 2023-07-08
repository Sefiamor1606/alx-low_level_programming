#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be found.
 *
 * Return: Pointer to the beginning of the found substring within haystack,
 *         or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *h = haystack;
	char *n = needle;

	while (*n && (*h == *n))
	{
	h++;
	n++;
	}

	if (*n == '\0')
	{
	return (haystack);
	}

	haystack++;
	}

	return (NULL);
}
