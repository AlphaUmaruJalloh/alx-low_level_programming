#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - This function prints a string in reverse order
 * @s: input argument
 *
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	putchar('\n');
}
