#include "main.h"

/**
 * _printf - prints according to format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	i = 0;
	count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			count = count + handle_specifier(format[i], args);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}

		i++;
	}

	va_end(args);

	return (count);
}
