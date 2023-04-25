#include "main.h"

/**
 * print_unsigned - Print a unsigned int
 * @list: Numbers to print
 *
 * Return: Printed len
 **/
int print_unsigned(va_list list)
{
	char *p_buff;
	int printed_len;

	p_buff = itoa(va_arg(list, unsigned int), 10);

	printed_len = print((p_buff != NULL) ? p_buff : "NULL");

	return (printed_len);
}
