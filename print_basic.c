#include "main.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 *
 * Return: 1
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string
 * @args: list of arguments
 *
 * Return: number of printed characters
 */
int print_string(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 * print_percent - prints a percent sign
 * @args: list of arguments
 *
 * Return: 1
 */
int print_percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}

/**
 * handle_specifier - checks the format specifier
 * @c: specifier character
 * @args: list of arguments
 *
 * Return: number of printed characters
 */
int handle_specifier(char c, va_list args)
{
	if (c == 'c')
		return (print_char(args));
	else if (c == 's')
		return (print_string(args));
	else if (c == '%')
		return (print_percent(args));
	else if (c == 'd' || c == 'i')
		return (print_number(args));
	else
	{
		_putchar('%');
		_putchar(c);
		return (2);
	}
}
