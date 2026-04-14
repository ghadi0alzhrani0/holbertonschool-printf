#include "main.h"

/**
 * _putchar - prints one character
 * @c: character to print
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
