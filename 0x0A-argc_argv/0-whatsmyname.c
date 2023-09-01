#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program.
 * @argc: Argument counts.
 * @argv: Argument vectors.
 *
 * Return: Always 0 - Program executed successfully.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
