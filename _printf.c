#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
# include "main.h"

/**
 * printSpecifier - prints the specifiers c,d ,i
 * @spec: argument to the function is the specifier
 * @arg: the arguments which are specifers
 * Return: number of charcters printed
 */

int printSpecifier(char spec, va_list arg)
{
	int i;


	specifierStruct sp[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	for (i = 0; sp[i].a != NULL; i++)
	{

		if (sp[i].a[0] == spec)
		{
			return (sp[i].print(arg));
		}

	}
	return (0);
}

/**
 * _printf - prints anything
 * @format: arguments passed
 * Return: number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	unsigned int j;
	int count = 0;
	int specifierPrinted = 0;

	va_list arg;
	/*start of  iterations in the variadic function arguments*/
	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
			count++;
			continue;
		}
		if (format[j + 1] == '%')
		{
			_putchar('%');
			count++;
			continue;
		}
		if (format[j + 1] == '\0')
			return (-1);
		specifierPrinted = printSpecifier(format[j + 1], arg);
		if (specifierPrinted == 0)
		{
			_putchar('%');
			count++;
		}
		if (specifierPrinted > 0)
		{
			count = count + specifierPrinted;
		}
		if (specifierPrinted == -1 || specifierPrinted != 0)
			count++;
	}
	va_end(arg);
	return (count);
}
