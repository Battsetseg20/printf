#include "holberton.h"

/**
 * get_func - check for valid specifier
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
	int i;
	func_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{NULL, NULL}
	};

	for (i = 0; p[i].t; i++)
	{
		if (*format == *(p[i].t))
		{
			return (p[i].f);
		}
	}
	return (NULL);
}
