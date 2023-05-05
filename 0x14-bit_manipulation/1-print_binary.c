#include "main.h"
#include <stdio.h>


/**
 *print_binary - Print the binary of a number
 *
 *@n:number to be printed in binary
*/


void print_binary(unsigned long int n)
{
        int a;
	if (n > 1)
	  {
		print_binary(n >> 1);
	  }

	a = (n & 1) + '0';
	putchar(a);
}
