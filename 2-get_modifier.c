#include "main.h"

/**
 * get_modifier - helps finds the modifier function
 * @s: string
 * @params: parameters structure
 * Return: int (valid modif)
 */
int get_modifier(char *s, params_t *params)
{
	int a = 0;

	switch (*s)
	{
	case 'h':
		a = params->h_modifier = 1;
		break;
	case 'l':
		a = params->l_modifier = 1;
		break;
	}
	return (a);
}
