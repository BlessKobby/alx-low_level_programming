#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Compares strings using _strcmp function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
