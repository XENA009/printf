#include "main.h"

/**
 * _puts - prints a string with newline
 * @str:  string to be printed
 * Return: int
*/
int _puts(char *str)
{
	char *c = str;

	while (*str)
		_putchar(*str++);
	return (str - c);
}
