#include <stdlib.h>
#include <time.h>
/* more headers go here */

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and stores it in the variable n.
 *              Prints the value of n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	return (0);
}

