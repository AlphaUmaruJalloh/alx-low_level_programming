#include "main.h"
/**
 * _memset - fills a memory block with a constant byte
 * @s: the starting address of the memory to be filled
 * @b: constant to fill memory with.
 * @n: bytes of the memory area to be filled
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
