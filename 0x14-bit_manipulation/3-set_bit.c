#include <stdio.h>
#include "main.h"



/**
 *set_bit - Stes bit at an index to 1
 *
 *@index: Given index  of bit
 *@n:pointer to bits
 *
 *Return - 1 n error or  -1 if worked
*/



int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	  {
	    return (-1);
	  }

	m = 1 << index;
	*n = *n | set;

	return (1);
}
