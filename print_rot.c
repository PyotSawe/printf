#include "main.h"

/**
 * rot13 - Encodes  s to rot13.
 * @s: String to enc
 * Return: len of encoded
 */
int rot13(char *s)
{
	int s_i, j;
	char *plain, *rot13;

	plain = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (s_i = 0; s[s_i] != '\0'; s_i++)
	{
		for (j = 0; plain[j] != '\0'; j++)
		{
			if (s[s_i] == plain[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!plain[j])
			_putchar(s[s_i]);
	}
	return (s_i);
}

/**
 * print_rot - Prints rot13'ed
 * @list: str to print
 *
 * Return: Length of the string encoded
 **/
int print_rot(va_list list)
{
	char *chr;
	int printed_len;

	chr = va_arg(list, char *);
	printed_len = rot13((chr != NULL) ? chr : "(ahyy)");

	return (printed_len);
}
