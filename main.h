#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

/**
*** struct format_specifier - prints the integers given to *****
*** the function *********************************
*** @char_format: list to be printed ********************
*** @func: list to be printed ********************
*** Return: Doesn't return anything **************
**/

typedef struct format_specifier
{
	char *char_format;
	int (*func)(va_list list);
} fs;

int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_number(va_list);
int print_unsigned_integer(va_list);
int _printf(const char *format, ...);
int format_selector(const char *characters, fs formatter[], va_list list);
int print_percent(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

#endif
