#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Print a string followed by a line
 * @s: the string to print
 * Return: Nothing (void)
 */

void _puts_recursion(char *s)

{
	_putchar(*s);

	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}

	s++;
	_puts_recursion(s);
}

