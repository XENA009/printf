#include "main.h"

/**
 * print_rev - prints in reverse
 * @ap: string
 * @params: parameters structure
 * Return: int (bytes printed)
*/
int print_rev(va_list ap, params_t *params)
{
	int lg, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (lg = 0; *str; str++)
			lg++;
		str--;
		for (; lg > 0; lg--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}
