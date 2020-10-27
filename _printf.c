#include <stdarg.h>
#include "holberton.h"

/**
 *_printf - prints to output according to format
 *@format: character string
 *
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, j;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	i = 0;
	j = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				if (format[i + 1] != 'c' && format[i + 1] != 's'
				    && format[i + 1] != '%')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i++;
					j += 2;
				}

				else
				{
					f = get_func(&format[i + 1]);
					f(args);
					j++;
					i++;
				}
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		i++;
	}
	va_end(args);
	return (j);
}
