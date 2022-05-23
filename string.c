#include "main.h"

/**
 * get_precision - gets the precision from the format string
 * @str: the format string
 * @params: the parameters struct
 * @ap: the argument pointer
 *
 * Return: new pointer
 */
char *precision(char *str, params_t *params, va_list ap)
{
	int d = 0;

	if (*str != '.')
		return (str);
	str++;
	if (*str == '*')
	{
		d = va_arg(ap, int);
		str++;
	}
	else
	{
		while (_isdigit(*str))
			d = d * 10 + (*str++ - '0');
	}
	params->precision = d;
	return (str);
}
