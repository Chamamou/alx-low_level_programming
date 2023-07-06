#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @br: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *br)
{
	int i;
	unsigned int dc_vlr = 0;

	if (!br)
		return (0);

	for (i = 0; br[i]; i++)
	{
		if (br[i] < '0' || br[i] > '1')
			return (0);
		dc_vlr = 2 * dc_vlr + (br[i] - '0');
	}

	return (dc_vlr);
}

