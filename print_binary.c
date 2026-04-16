#include "main.h"

/**
 * print_binary_helper - prints a number in binary
 * @n: number
 *
 * Return: number of printed characters
 */
int print_binary_helper(unsigned int n)
{
	int count;

	count = 0;

	if (n / 2 != 0)
		count += print_binary_helper(n / 2);

	_putchar((n % 2) + '0');
	count++;

	return (count);
}

/**
 * print_binary - prints binary number
 * @args: arguments list
 *
 * Return: number of printed characters
 */
int print_binary(va_list args)
{
	unsigned int n;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	return (print_binary_helper(n));
}
