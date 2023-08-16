#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given number.
 *
 * @n: The given number whose last digit is to be printed.
 *
 * Return: The value of the last digit of the given number.
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
