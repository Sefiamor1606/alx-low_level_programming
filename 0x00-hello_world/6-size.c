#include <stdio.h>
/**
 * main - ":Printing the size of various types on the computer
 *  it is compiled and run on" followed  by new line.
 * Return: 0 (Success)
 */
int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n",
		(unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n",
		(unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n",
		(unsigned long)sizeof(long int));
	printf("Size of a of a long long int: %lu byte(s)\n",
		(unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n",
		(unsigned long)sizeof(float));

	return (0);
}
