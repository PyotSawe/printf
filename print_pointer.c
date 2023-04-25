#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * print_pointer - Print ptr in hex
 * @list: ptr to print
 *
 * Return: Len of printed
 **/
int print_pointer(va_list list)
{
	char *p_buff;
	int printed_len;

	p_buff = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p_buff, "0"))
		return (print("(nil)"));

	printed_len = print("0x");

	if (!_strcmp(p_buff, "-1"))
		printed_len += print("ffffffffffffffff");
	else
		printed_len += print(p_buff);

	return (printed_len);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
