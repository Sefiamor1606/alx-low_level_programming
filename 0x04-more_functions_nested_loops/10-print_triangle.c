#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size
 * @size: The size of the triangle
 *
 * Description: This function prints a triangle using the character '#'
 *              based on the given size.
 */

void print_triangle(int size)

{

	int i, j;

	if (size <= 0)
	{
	_putchar('\n');

	}
	else
	{
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

