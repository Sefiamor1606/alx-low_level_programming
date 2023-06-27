#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string to be printed
 * Return : void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');

}

