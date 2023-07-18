#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Description: This function prints the multiplication table
 *              for the numbers 0 to 9, inclusive.
 */
void times_table(void)
{
	int digit, num, result;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');

		for (num = 1; num <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			result = digit * num;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}

		_putchar('\n');
	}
}
