#include "main.h"

/**
 * get_print_func - format func
 * @s: string
 * @ap: argument pointer
 * @params: parameters structure
 * Return: number of bytes
*/
int get_print_func(char *s, va_list ap, params_t *params)
{
	int (*f)(va_list, params_t *) = get_specifier(s);

	if (f)
		return (f(ap, params));
	return (0);
}
