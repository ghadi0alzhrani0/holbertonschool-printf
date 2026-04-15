#include "main.h"

/**
 * print_unsigned_number - prints an unsigned number
 * @n: number to print
 *
 * Return: number of printed characters
 */
int print_unsigned_number(unsigned int n)
{
	int count;

	count = 0;

	if (n / 10 != 0)
		count += print_unsigned_number(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}

/**
 * print_number - prints an integer
 * @args: list of arguments
 *
 * Return: number of printed characters
 */
int print_number(va_list args)
{
	int n;
	unsigned int num;
	int count;

	n = va_arg(args, int);
	count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = (unsigned int)(-(n + 1));
		num += 1;
	}
	else
	{
		num = (unsigned int)n;
	}

	count += print_unsigned_number(num);
	return (count);
}
