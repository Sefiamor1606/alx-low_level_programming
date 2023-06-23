#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of lines to be drawn
 *
 * Description: This function draws a straight line in the terminal using the
 *              character '_'. The number of lines to be drawn is specified by
 *              the parameter 'n'.
 */

void print_line(int n)
{
    int x;

    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (x = 0; x < n; x++)
        {
            _putchar('_');
        }
    }
    _putchar('\n');
}

