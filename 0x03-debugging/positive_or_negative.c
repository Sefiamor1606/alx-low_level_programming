#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n
 * each time it is executed.
 * Return: Always (0)
 */

void positive_or_negative(int i)

{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	printf("The number is: %d\i", i);

	if (i > 0)
	{
	printf("is positive\i");
	}
	else if (i == 0)
	{
	printf("is zero\i");
	}
	else
	{
	printf("is negative\i");
	}

	return(0);
}

