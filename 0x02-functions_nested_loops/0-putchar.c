<<<<<<< HEAD
#include "main.h"
/**
 * main - Entry point of program.
 * Return: 0 - Program executed successfully.
 */
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
=======
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
>>>>>>> a141d3aebbc88bbb4c65bb5e1a222c726772b123
}
