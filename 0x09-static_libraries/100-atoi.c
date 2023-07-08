#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer value.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
	sign = -1;
	s++;
	}

	while (*s >= '0' && *s <= '9')
	{
	result = result * 10 + (*s - '0');
	s++;
	}

	return (sign * result);
}

