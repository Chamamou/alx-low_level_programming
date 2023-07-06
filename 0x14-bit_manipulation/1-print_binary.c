#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @nbr: number to print in binary
 */
void print_binary(unsigned long int nbr)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = nbr >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

