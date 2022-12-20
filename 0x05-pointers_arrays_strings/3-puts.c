#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: an input variable
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
