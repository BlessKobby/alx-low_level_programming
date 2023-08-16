#include "main.h"
/**
 * _islower - Looks for lowercase alphabets.
 * @c: Character to be checked.
 * Return: 1 - Lower case character printed successfully or 0
 * for any thing else.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
