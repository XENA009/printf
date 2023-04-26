#include "main.h"

/**
 * get_width - gets the width of the format string
 * @s: string
 * @params: parameters structure
 * @ap: argument pointer
 * Return: char pointer
*/
char *get_width(char *s, params_t *params, va_list ap)
{
	int d = 0;

	if (*s == '*')
	{
		d = va_arg(ap, int);
		s++;
	}
	else
	{
		while (_isdigit(*s))
			d = d * 10 + (*s++ - '0');
	}
	params->width = d;
	return (s);
}
