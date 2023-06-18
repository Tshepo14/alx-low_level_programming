#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	for (number = '\x61'; number <= '\x66'; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}

