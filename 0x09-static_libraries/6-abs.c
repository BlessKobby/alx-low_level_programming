#include "main.h"
/**
 * _abs - Calcultates the absolute value of an integer.
 *
 * @c: The integer whose absolute value is to be calculated.
 *
 * Return: The absolute value of the interger or zero.
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
