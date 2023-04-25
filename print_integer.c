#include "main.h"

/**
 * print_integer - Print base 10 int
 * @list: what to print
 *
 * Return: Len of printed
 **/
int print_integer(va_list list)
{
	char *p_buff;
	int printed_len;

	p_buff = itoa(va_arg(list, int), 10);

	printed_len = print((p_buff != NULL) ? p_buff : "NULL");

	return (printed_len);
}
