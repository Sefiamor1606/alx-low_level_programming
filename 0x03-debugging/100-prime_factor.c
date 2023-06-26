#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
    long number = 612852475143;
    long largestFactor = 1;
    long square = sqrt(number);

    for (long i = 2; i <= square; i++)
    {
        if (number % i == 0)
        {
            if (is_prime(i))
                largestFactor = i;
            if (is_prime(number / i))
                largestFactor = number / i;
        }
    }

    printf("The largest prime factor of %ld is %ld\n", number, largestFactor);

    return 0;
}

