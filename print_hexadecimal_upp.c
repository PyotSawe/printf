#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * print_hexadecimal_upp - Print in UPPER HEX
 * @list: what to print
 *
 * Return: Len of printed
 **/
int print_hexadecimal_upp(va_list list)
{
	char *p_buff;
	int printed_len;

	p_buff = itoa(va_arg(list, unsigned int), 16);
	p_buff = string_to_upper(p_buff);

	printed_len = print((p_buff != NULL) ? p_buff : "NULL");

	return (printed_len);
}

/**
 * is_lowercase - Check if lower
 * @c: Character to check
 * Return: 1 or 0
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Change to uppercase
 * @s: String to convert to UPPER
 * Return: converted str
 **/
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

