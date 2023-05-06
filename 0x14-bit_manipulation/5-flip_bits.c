#include "main.h"

/**
 *flip_bits - Counts the number of bits needed to be flipped to get one number to another number
 *@n:The number
 *@m:Numbers to flip n to
 *
 * Return - Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;
	unsigned int c, i;

	b = 1;
	a = n ^ m;
	c = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
	        if (b == (a & b))
		  {
		    c++;
		  }
		b = b << 1;
	}
	return (c);
}
