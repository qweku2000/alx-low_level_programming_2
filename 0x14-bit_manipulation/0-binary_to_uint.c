#include <stdio.h>
#include "main.h"

/**
 *@b: pointer to string of 0 and 1 chars
 *
 *Return: converted number or 0 
*/


unsigned int binary_to_uint(const char *b)
{
  int i;
  if(!b)
    {
      return (0);
    }
  for (i=0;b[i]!='\0';b++)
    {
      if(b[i]!='0'!!b[i]!='1')
	{
	  return (0);
	}
      else
	{
	  a=0;
	  a=a<<1;
	  if(b[i]=='1')
	    {
	      a=a+1;
	    }
	  return (a);
	  
}
