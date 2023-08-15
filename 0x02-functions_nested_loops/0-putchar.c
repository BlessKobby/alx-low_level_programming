#include <stdio.h>
#include <main.h>
/**
 * main - Entry point for Program.
 * Return: 0 - Program executed successfully.
 */
int _putchar(char c);/* Declaration of the _putchar function */

int main(void)
{
	const char *message = "_putchar";
	for (int i = 0; message[i] != '\0'; 1++)
	{
		_putchar(message[i]);
	}
	return (0);
}
