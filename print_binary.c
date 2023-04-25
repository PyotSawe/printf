#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Len of processed list
 **/
int print_binary(va_list list)
{
	char *p_buff;
	int printed_len;

	p_buff = itoa(va_arg(list, unsigned int), 2);

	printed_len = print(p_buff);

	return (printed_len);
}
