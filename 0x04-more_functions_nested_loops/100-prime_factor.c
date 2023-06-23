#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long i, largest_factor;

	largest_factor = -1;

	/* Handle the case where the number is divisible by 2 */
	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}

	/* Check for other prime factors starting from 3 */
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_factor = i;
			n /= i;
		}
	}

	/* Handle the case where the remaining number is a prime factor */
	if (n > 2)
		largest_factor = n;

	return largest_factor;
}

int main(void)
{
	long number = 612852475143;
	long largest_factor;

	largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return 0;
}

