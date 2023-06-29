#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared to the first
 * Return: if str1 > str2, with a negative difference
 * if str1 = str2, 0
 * if str1 < str2, with a positive difference
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

