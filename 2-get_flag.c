#include "main.h"

/**
 * get_flag - helps find the flag
 * @s: string
 * @params: parameters structure
 * Return: int (valid flag)
*/
int get_flag(char *s, params_t *params)
{
	int a = 0;

	switch (*s)
	{
		case '+':
			a = params->plus_flag = 1;
			break;
		case ' ':
			a = params->space_flag = 1;
			break;
		case '#':
			a = params->hashtag_flag = 1;
			break;
		case '-':
			a = params->minus_flag = 1;
			break;
		case '0':
			a = params->zero_flag = 1;
			break;
	}
	return (a);
}
