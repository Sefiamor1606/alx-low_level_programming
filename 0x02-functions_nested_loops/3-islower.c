#include "main.h"

/**
 * main -  Checks for lowercase letter
 * @c the character to be chcked
 * Return: 1 for lowercase letter and 0 for anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
