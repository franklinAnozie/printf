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
	void (*func)(va_list list);
} fs;

int _putchar(char c);
void print_char(va_list);
void print_string(va_list);
void print_number(va_list);
void print_unsigned_integer(va_list);
int _printf(const char *format, ...);

#endif
