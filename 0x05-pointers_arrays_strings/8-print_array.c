#include<stdio.h>
#include "main.h"
/**
 * print_array - prints n element of array
 * @a: value to be evaluate
 * @n: value to be evaluate
 * Return: notting
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");

}
