#include "main.h"
/**
 * swap_int - swaps two integers' values
 * @a: first value to be provided
 * @b: Second parameter to be provided
 *
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
