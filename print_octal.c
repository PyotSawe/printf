#include "main.h"

/**
 * print_octal - Print a u_octal
 * @list: octal to print
 *
 * Return: Len of printed octals
 **/
int print_octal(va_list list)
{
	char *p_buff;
	int printed_len;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	printed_len = print((p_buff != NULL) ? p_buff : "NULL");

	return (printed_len);
}
