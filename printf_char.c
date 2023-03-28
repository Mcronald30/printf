#include "main.h"
/**
 * printf_char - prints a character s.
 * @val: arguments of the function.
 * Return: 1 success
 */

int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
