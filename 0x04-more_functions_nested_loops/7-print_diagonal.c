#include "main.h"

/**
 * print_diagonal - Draws diagonal lines according to the parameter
 * @n: the number of times to print diagonal lines
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}


