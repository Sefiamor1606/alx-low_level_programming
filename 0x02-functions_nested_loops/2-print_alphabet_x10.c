#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 * Each letter is followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)

{
	char c;
	int i = 0;

	while (i <= 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
