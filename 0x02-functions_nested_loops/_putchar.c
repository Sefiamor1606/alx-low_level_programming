#include <unistd.h>

/**
 * putchar - write charcter c to stdout
 * @c - the return  character to print
 * Return: On success 1
 * On error, _1 is returned and errno is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
