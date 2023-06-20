#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long long int fib1 = 1, fib2 = 2, fib;

	printf("%llu, %llu", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		fib = fib1 + fib2;
		printf(", %llu", fib);

		fib1 = fib2;
		fib2 = fib;
	}

	putchar('\n');

	return 0;
}

