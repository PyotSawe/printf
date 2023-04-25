#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string.
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int format_len;
	va_list args;

	if (format == NULL)
		return (-1);

	format_len = _strlen(format);
	if (format_len <= 0)
		return (0);

	va_start(args, format);
	format_len = printer_sys(format, args);

	_putchar(-1);
	va_end(args);

	return (format_len);
}
