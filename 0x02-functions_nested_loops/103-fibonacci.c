#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the sum of even Fibonacci numbers
 *              up to a limit of 4,000,000.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3 = 0, sum = 0;

	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		if ((n1 % 2) == 0)
		{
			sum += n1;
		}
	}

	printf("%ld\n", sum);

	return (0);
}