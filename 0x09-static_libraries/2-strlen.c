#include "main.h"
/**
 * _strlen - A function that returns the length of a string.
 * @s: string
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
