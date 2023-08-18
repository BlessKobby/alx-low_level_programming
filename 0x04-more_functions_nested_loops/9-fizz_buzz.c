#include "main.h"
#include <stdio.h>

/**
 * main - Program prints digits from 1 to 100, then a new line
 * but for multiples of three, prints Fizz instead of the digit
 * and for the multiples of five, prints Buzz and for multiples
 * of three and five, prints FizzBuzz.
 *
 * Return: 0 -Program executed successfully.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
