#include "main.h"

/**
 * _isupper - Checks for upper case character
 * @c: the number to be checked
 * Return 1 for uppercase letter and 0 for anything else
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}

