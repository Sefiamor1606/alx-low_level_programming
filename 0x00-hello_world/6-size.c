#include <stdio.h>
/**
 * main - Printing the size of various types on the computer it is compiled and run on.
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeofof(a));
printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeofof(b));
printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeofof(c));
printf("Size of a of a long long int: %lu byte(s)\n",(unsigned long)sizeofof(d));
printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeofof(f));
return (0);
}
