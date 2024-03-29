#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another num
 * @n: number one long int.
 * @m: number two long int.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
