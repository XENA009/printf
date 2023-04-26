#include "main.h"

/**
 * print_hex - func that prints unsigned hex num in lowercase
 * @ap: argument pointer
 * @params: parameters structure
 * Return: int (number of bytes printed)
*/
int print_hex(va_list ap, params_t *params)
{
	unsigned long l;
	int count = 0;
	char *s;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	s = convert(l, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && l)
	{
		*--s = 'x';
		*--s = '0';
	}
	params->unsign = 1;
	return (count += print_number(s, params));
}

/**
 * print_HEX - func that prints unsigned hex num in uppercase
 * @ap: argument pointer
 * @params: parameters structure
 * Return: int (number of bytes printed)
*/
int print_HEX(va_list ap, params_t *params)
{
	unsigned long l;
	int count = 0;
	char *s;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	s = convert(l, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && l)
	{
		*--s = 'X';
		*--s = '0';
	}
	params->unsign = 1;
	return (count += print_number(s, params));
}

/**
 * print_binary - func that prints unsigned binary num
 * @ap: argument pointer
 * @params: parameters structure
 * Return: int (number of bytes printed)
*/
int print_binary(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *s = convert(n, 2, CONVERT_UNSIGNED, params);
	int count = 0;

	if (params->hashtag_flag && n)
		*--s = '0';
	params->unsign = 1;
	return (count += print_number(s, params));
}

/**
 * print_octal - func that prints unsigned octal num
 * @ap: argument pointer
 * @params: parameters structure
 * Return: int (number of bytes printed)
*/
int print_octal(va_list ap, params_t *params)
{
	unsigned long l;
	char *s;
	int count = 0;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	s = convert(l, 8, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && l)
		*--s = '0';
	params->unsign = 1;
	return (count += print_number(s, params));
}
