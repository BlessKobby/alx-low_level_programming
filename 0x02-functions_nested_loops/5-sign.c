#include "main.h"

/**
 * print_sign - Prints the sign of numeric character.
 * @n: The numeric character whose sign is to be printed.
 * Return: 1 for a positive number, 0 for zero or -1 for a negative number.
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
