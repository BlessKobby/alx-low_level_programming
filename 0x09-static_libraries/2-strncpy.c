#include "main.h"
/**
 * _strncpy - copy a given string.
 * @dest: input value.
 * @src: input value.
 * @n: input value.
 *
 * Return: dest - Program executed successfully.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
