#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned int fib1 = 1, fib2 = 2, fib3;

	printf("%u, %u", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		fib3 = fib1 + fib2;
		printf(", %u", fib3);

		fib1 = fib2;
		fib2 = fib3;
	}

	putchar('\n');

	return (0);
}

