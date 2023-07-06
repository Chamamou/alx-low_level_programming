#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @nbr: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *nbr, unsigned int index)
{
	if (index > 63)
		return (-1);

	*nbr = (~(1UL << index) & *nbr);
	return (1);
}

