#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: size input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)

{
	int i, sum1 = 0, sum2 = 0;
	int n;

	for (i = 0; i < size * size; i = i + size + 1)
	{
	sum1 = sum1 + a[i];
	}

	for (n = size - 1; n < size * size - 1; n = n + size - 1)
	{
	sum2 = sum2 + a[n];
	}

	printf("%d, %d\n", sum1, sum2);
}

