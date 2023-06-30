#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to be capitalized
 * Return: a pointer to the capitalized string
 */

char *string_toupper(char *str)

{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	{
	str[index] -= 32;
	}
	index++;
	}

	return (str);
}

/**
 * main - the entry point
 * Shows the usage of the strin_toupper to
 * change lowercase to Uppercase
 *Return: always 0
 */

int main(void)

{
	char str[] = "Look up!";

	string_toupper(str);
	printf("%s\n", str);
	printf("%s\n", str);

	return (0);
}

