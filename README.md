C-PRINTF

The project creates a function that produces output according to a format
Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
Format is a character string.The format string is composed of zero or more diretives.
Specifers handled are:
	c
	s
	%
	d
	i



The code is compiled using:
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format 
