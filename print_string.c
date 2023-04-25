#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: len of printed string.
 */

int print_string(va_list list)
{
	char *chr;
	int printed_len;

	chr = va_arg(list, char*);
	printed_len = print((chr != NULL) ? chr : "(null)");

	return (printed_len);
}

