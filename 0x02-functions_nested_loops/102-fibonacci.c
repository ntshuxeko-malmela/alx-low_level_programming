#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int count, num1 = 0, num2 = 1, nextNum;

	/* Print the first two Fibonacci numbers (1 and 2) */
	printf("%d, %d", num1, num2);

	/* Generate and print the remaining 48 Fibonacci numbers */
	for (count = 3; count <= 50; count++)
	{
		/* Compute the next Fibonacci number */
		nextNum = num1 + num2;

		/* Print the Fibonacci number */
		printf(", %d", nextNum);

		/* Update the values for the next iteration */
		num1 = num2;
		num2 = nextNum;
	}

	printf("\n");

	return (0);
}
