#include "main.h"

/**
 * print_from_to - prints a range of characters
 * @start: starting point
 * @stop: stopping point
 * @except: address of exception
 * Return: int (bytes printed)
*/
int print_from_to(char *start, char *stop, char *except)
{
	int s = 0;

	while (start <= stop)
	{
		if (start != except)
			s += _putchar(*start);
		start++;
	}
	return (s);
}
