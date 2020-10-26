#include "holberton.h"

/**
 *print_char - prints character
 *@args: argument
 *
 *Return: character
 */

int print_char(va_list args)
{

	_putchar(va_arg(args, int));
	return (1);
}


/**
 *print_str - prints string
 *@args: arguments
 *Return: string
 */

int print_str(va_list args)
{

	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}

/**
 *print_pct - prints character "%"
 *@args : arguments
 *
 *Return: character "%"
 */
int print_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

