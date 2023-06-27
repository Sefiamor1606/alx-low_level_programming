#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array of integers
 * @n: the number of elements to print
 * Return: nothing
 */

void print_array(int *a, int n)

{
	if (a == NULL || n <= 0)
	return;

	int i;

	for (i = 0; i < n - 1; i++)

	{
	printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}

