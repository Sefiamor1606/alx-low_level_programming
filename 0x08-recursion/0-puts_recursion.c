#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Print a string followed by a line
 * @s: the string to print
 * Return: Nothing (0)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

_	putchar(*s);
	s++;
	_puts_recursion(s);
}
