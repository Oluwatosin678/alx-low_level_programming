#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; // Change int to unsigned int for 'i'

	for (i = 0; i < n; i++) // Change i++ to i < n
	{
		s[i] = b;
	}

	return (s);
}
u.asdhl/iasefupoiedhfPOIeawDHOIEWHOUAqehoiqeOUJWEFiuo
