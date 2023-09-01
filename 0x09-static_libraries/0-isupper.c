#include "main.h"

/**
 * _isupper - Checks for uppercase letters.
 * @c: character to to be check.
 *
 * Return: 0 or 1 - Program executed successfully.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
