#include "main.h"

/**
 * print_rot13 - prints a string in a rotation (rot13)
 * @ap: string
 * @params: parameters structure
 * Return: int (number of bytes printed)
*/
int print_rot13(va_list ap, params_t *params)
{
	int i, ind;
	int count = 0;
	char arr[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	index = 0;
	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z')
		    || (a[i] >= 'a' && a[i] <= 'z'))
		{
			ind = a[i] - 65;
			count += _putchar(arr[ind]);
		}
		else
			count += _putchar(a[i]);
		i++;
	}
	return (count);
}
