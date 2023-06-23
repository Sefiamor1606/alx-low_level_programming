#include "main.h"

/**
 * print_square - prints square according to n number of times
 * @size: the number of squares/ number of times
 *  Description: This function prints a square using the character '#'
 *              based on the given size.
 *Return: Empty
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

