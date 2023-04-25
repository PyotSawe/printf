#include "main.h"

/**
 * print_rev_string - Prints reversed string
 * @list: List of all things to be printed
 *
 * Return: Len of printed
 **/
int  print_rev_string(va_list list)
{
	int i, printed_len;
	const char *str;

	str = va_arg(list, const char *);

	printed_len = _strlen(str);

	for (i = printed_len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (printed_len);
}
