#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int recursive_print(int number, int count);

/**
*** print_percent - prints percent *****
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

int print_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}

/**
*** print_char - prints the integers given to *****
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

int print_char(va_list list)
{
	char a = va_arg(list, int);

	_putchar(a);
	return (1);
}

/**
*** print_string - prints the integers given to *****
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

int print_string(va_list list)
{
	char *string = va_arg(list, char *);
	int j;

	j = 0;

	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[j] != '\0')
	{
		_putchar(string[j]);
		j++;
	}

	return (j);
}

/**
*** print_number - prints the integers given to *****
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

int print_number(va_list list)
{
	int number = va_arg(list, int);

	return (recursive_print(number, 0));
}

/**
*** recursive_print - prints the integers given to *****
*** the function *********************************
*** @number: list to be printed ********************
*** Return: Doesn't return anything **************
**/

int recursive_print(int number, int count)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number / 10)
	{
		recursive_print((number / 10), count++);
	}

	_putchar((number % 10) + '0');

	return (count);
}
