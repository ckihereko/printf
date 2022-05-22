#include "main.h"
#include <stdio.h>
#include <unistd.h>

/*PRINTING CHARACTERS*/
/**
 * print_char - prints character to output
 * @arg: character arguments
 * Return: 1 on succes
 */
int print_char(va_list arg)
{

	return (_putchar(va_arg(arg, int)));

}
/*PRINTING STRINGS*/
/**
 * print_str - prints a string
 * @arg: string argument
 * Return: number of chacters printed
 */
int print_str(va_list arg)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
	_putchar(str[count]);
	}
	return (count);
}
/*PRINTING integers*/
/**
 * print_int - prints integer
 * @arg: integer argument
 * Return: 0
 */
int print_int(va_list arg)
{
	int digit = va_arg(arg, int);
	unsigned int a = 1, i, result, charp = 0;

	if (digit < 0)
	{
		_putchar('-');
		charp++;
		digit = digit * (-1);
	}
	for (i = 0; digit / a > 9; i++, a *= 10)
	;
	for (; a >= 1; digit %= a, a /= 10, charp++)
	{
		result = digit / a;
		_putchar('0' + result);
	}
	return (charp);

}
