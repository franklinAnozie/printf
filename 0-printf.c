#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
*** _printf - prints line of text given to it *********
*** in the right format *******************************
*** @characters: list to be printed *******************
*** Return: returns the number of characters printed **
**/

int _printf(const char *characters, ...)
{
	int charCount;
	va_list list;
	fs formatter[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_number},
		{"d", print_number},
		{"%", print_percent},
		{NULL, NULL}};

	if (characters == NULL)
		return (-1);

	va_start(list, characters);

	charCount = format_selector(characters, formatter, list);

	va_end(list);
	return (charCount);
}
