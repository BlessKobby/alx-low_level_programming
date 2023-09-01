#include "main.h"
/**
 * _strpbrk - Entry point of program.
 * @s: input value.
 * @accept: input value.
 * Return: Always 0 - Program executed successfully.
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
