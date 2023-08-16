#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers for a given number to 98.
 *
 * @n: The natural number the printing starts from.
 *
 * Return: 0 - Program executed successfully.
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
		break;
	}
	else
	{
		printf("%d, ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
		break;
	}
	else
	{
		printf("%d, ", n);
	}
	}
	}
}
