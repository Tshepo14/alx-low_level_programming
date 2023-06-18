#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');

	return (0);
}

