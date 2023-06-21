#include "main.h"

/**
 * main - Prints alphabets in lowercase
 *
 * Alphabets are printed in lowercase from a to z
 *Each new letter is printed on a new line.
 * Return: Always 0
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
