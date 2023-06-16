#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message using printf or puts functions
 *
 * Return: Always 1 (indicating failure)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - "
			"Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);
	ssize_t written;

	written = write(STDERR_FILENO, message, len);
	if (written != len)
	{
		int error = (written == -1) ? errno : EIO;
		char *errorMsg = "Error writing to standard error\n";
		ssize_t errorLen = strlen(errorMsg);

		write(STDERR_FILENO, errorMsg, errorLen);
		return (error);
	}

	return (1);
}
