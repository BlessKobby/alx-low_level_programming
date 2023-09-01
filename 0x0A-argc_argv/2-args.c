#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: Argument counts.
 * @argv: Argument vectors.
 *
 * Return: Always 0 - Program executed successfully.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
