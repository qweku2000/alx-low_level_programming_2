#include <stdio.h>
#include "main.h"

/**
 *get_bit - Returns value of a bit at an index
 *
 *@n:The bits
 *@index: index used to check bits
*/


int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	  {
		return (-1);
	  }

	if ((n & (1 << index)) == 0)
	  {
	    return (0);
	  }

	return (1);
}
