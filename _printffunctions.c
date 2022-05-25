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
	char *str = va_arg(arg, char *);

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
 * @d: integer argument
 * Return: 0
 */

int print_int(va_list d)
{
	int a[10];
	int digit, i, sum, charprinted, n;

	digit = va_arg(d, int);
	charprinted = 0;
	n = 1000000000;
	a[0] = digit / n;
	for (i = 1; i < 10; i++)
	{
		n /= 10;
		a[i] = (digit / n) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		charprinted++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{

		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			charprinted;
		}
	}
	return (charprinted);
}
