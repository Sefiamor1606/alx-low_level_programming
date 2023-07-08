#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @s: Pointer to the string to be printed.
 */

void _puts(char *s)

{
	while (*s != '\0')
	{
	putchar(*s);
	s++;
	}
	putchar('\n');
}
