#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: Pointer to the first occurrence of any character from accept in s,
 *         or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)

{
	while (*s)
	{
	char *a = accept;

	while (*a)
	{
	if (*s == *a)
	{
	return (s);
	}
	a++;
	}
	s++;
	}
	return (NULL);
}
