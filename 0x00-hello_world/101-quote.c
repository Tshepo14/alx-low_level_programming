#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * to the standard error without using printf or puts functions.
 *
 * Return: Always 1 (indicating failure)
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(message) - 1;
	ssize_t written = write(STDERR_FILENO, message, len);

	if (written != len)
	{
		int error = (written == -1) ? errno : EIO;
		const char errorMsg[] = "Error writing to standard error\n";
		write(STDERR_FILENO, errorMsg, sizeof(errorMsg) - 1);
		return error;
	}

	return 1;
}
