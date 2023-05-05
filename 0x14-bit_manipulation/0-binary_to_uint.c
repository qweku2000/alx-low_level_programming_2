#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: [0]  If b is NULL or contains chars not 0 or 1
 *         else - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int a;

	a = 0;
	if (!b)
	  {
		return (0);
	  }
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		  {
			return (0);
		  }
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		a = a << 1;
		if (b[i] == '1')
			a = a + 1;
	}
	return (a);
}
