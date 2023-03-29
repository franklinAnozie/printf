#include "main.h"
#include <stdarg.h>

void recursive_print(int number);

/**
*** print_char - prints the integers given to *****
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

void print_char(va_list list)
{
	char a = va_arg(list, int);

	_putchar(a);
}

/**
*** print_string - prints the integers given to *****
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

void print_string(va_list list)
{
	char *string = va_arg(list, char *);
	int j;

	j = 0;
	while (string[j] != '\0')
	{
		_putchar(string[j]);
		j++;
	}
}

/**
*** print_number - prints the integers given to *****
*** the function *********************************
*** @list: list to be printed ********************
*** Return: Doesn't return anything **************
**/

void print_number(va_list list)
{
	int number = va_arg(list, int);

	recursive_print(number);
}

/**
*** recursive_print - prints the integers given to *****
*** the function *********************************
*** @number: list to be printed ********************
*** Return: Doesn't return anything **************
**/

void recursive_print(int number)
{
	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number / 10)
	{
		recursive_print(number / 10);
	}

	_putchar((number % 10) + '0');
}
