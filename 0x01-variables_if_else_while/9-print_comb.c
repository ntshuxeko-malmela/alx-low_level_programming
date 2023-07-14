/*
 * File: 9-print_comb.c
 * Auth: Ntshuxeko Malmela
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++) {
		putchar('0' + i);
	       	if (i != 9) {
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
