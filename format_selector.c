#include <stdlib.h>
#include "main.h"

/**
*** format_selector - selects the right format to ********
*** print the line of text given *************************
*** @characters: list to be printed **********************
*** @formatter: struct of formats and functions to print *
*** @list: list to be printed ****************************
*** Return: returns the number of characters printed *****
**/

int format_selector(const char *characters, fs formatter[], va_list list)
{
	int i = 0, j = 0, k, characters_to_print = 0;

	while (characters[i] != '\0')
	{
		if (characters[i] == '%')
		{
			while (formatter[j].char_format != NULL)
			{
				if (characters[i + 1] == formatter[j].char_format[0])
				{
					k = formatter[j].func(list);
					if (k == -1)
						return (-1);
					characters_to_print += k;
					break;
				}
				j++;
			}
			if (formatter[j].char_format == NULL && characters[i + 1] != ' ')
			{
				if (characters[i + 1] != '\0')
				{
					_putchar(characters[i]);
					_putchar(characters[i + 1]);
					characters_to_print = characters_to_print + 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_putchar(characters[i]);
			characters_to_print++;
		}
		i++;
	}
	return (characters_to_print);
}
