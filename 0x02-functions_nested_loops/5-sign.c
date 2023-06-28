#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: number being checked
 * Return: 1 if number is greater than zero, 0 if zero and -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
