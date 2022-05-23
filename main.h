#ifndef MAIN_H
#define MAIN_H

/*STRUCTURE*/
#include <stdarg.h>
/**
 * struct spstructure - structure for printing various specifiers
 * @a: specifier to print
 * @print: function
 *
 *
 *
 */

typedef struct spstructure
{
	char *a;
	int (*print)(va_list);



} specifierStruct;

/*PROTOTYPES*/

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int print_percent(void);
/*End of prototypes*/

#endif
