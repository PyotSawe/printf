#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* printer_sys.c */
int printer_sys(const char *, va_list);
int percent_printer_sys(const char *, va_list, int *);

/* printer Dispatch units */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 * struct _formatter - Typedef struct
 *
 * @type: Format
 * @f: The formatter system
 **/
typedef struct _formatter
{
	char type;
	int (*f)(va_list);
} formatter_unit;

#endif
