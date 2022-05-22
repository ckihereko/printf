#include <unistd.h>
/* for function that deal with low level file manipulation such as write*/

/**
 * _putchar - prints a character
 * @c: character to be printed
 *
 * Return: always 0 success else -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
