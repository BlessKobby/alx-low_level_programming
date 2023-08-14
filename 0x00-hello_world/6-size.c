#include <stdio.h>
/**
 * main - Entry point for Program.
 * Return: 0 - Program executed successfully.
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int L;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %llu byte(s)\n", (unsigned long long int)sizeof(L));
printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(f));
return (0);
}
