#include "main.h"
/**
 * print_last_digit - prints the last digits of a number.
 * @n: the number in question.
 *
 * Return: Value of the last digits.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
