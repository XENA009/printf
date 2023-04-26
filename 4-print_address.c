#include "main.h"

/**
 * print_address - function that prints address
 * @ap: argument pointer
 * @params: parameters structure
 * Return: int (number of bytes printed)
*/
int print_address(va_list ap, params_t *params)
{
	unsigned long int n = va_arg(ap, unsigned long int);
	char *s;

	if (!n)
		return (_puts("(nil)"));

	s = convert(n, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	*--s = 'x';
	*--s = '0';
	return (print_number(s, params));
}
