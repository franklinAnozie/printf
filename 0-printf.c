#include <stdarg.h>
#include "main.h"

/**
*** _printf - prints the integers given to *****
*** the function *********************************
*** @characters: list to be printed ********************
*** Return: Doesn't return anything **************
**/

int _printf(const char *characters, ...)
{
	int i = 0, j, k = 0;
	va_list list;
	fs formatter[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_number},
		{"d", print_number}};
	va_start(list, characters);

	for (i = 0; characters[i] != '\0'; i++)
	{
		if (characters[i] != '%')
		{
			_putchar(characters[i]);
			k++;
		}
		else
		{
			if (characters[i + 1] == '%')
			{
				_putchar('%');
				k++;
			}
			else
			{
				j = 0;
				while (j < 5)
				{
					if (characters[i + 1] == *formatter[j].char_format)
						formatter[j].func(list);
					j++;
					k++;
				}
			}
			i++;
		}
	}
	va_end(list);
	return (k);
}
