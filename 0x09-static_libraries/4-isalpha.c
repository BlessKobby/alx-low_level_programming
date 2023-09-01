#include "main.h"
/**
 * _isalpha - Checks for an alphabetic character.
 * @c: Character to be checked.
 * Return: 1 for an alphabetic character or 0 any other character.
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

