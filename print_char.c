#include "main.h"
/**
 * print_char - print char.
 * @list: what to print
 *
 * Return: 1
 */
int print_char(va_list list)
{
	int chr;

	chr = va_arg(list, int);

	_putchar(chr);

	return (1);
}
