#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char *message = "_putchar\n";
	int i;

	for (i = 0; message[i] != '\0'; i++)
	{
		/* Use the write system call to print each character */
		write(1, &message[i], 1);
	}
	return (0);
}
