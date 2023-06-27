#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * Return: void.
 */

void print_array(int *array, int size)

{
	int i;

	for (i = 0; i < size; i++)
	{
	printf("%d", array[i]);

	if (i != size - 1)
	printf(", ");
	}

	printf("\n");
}

