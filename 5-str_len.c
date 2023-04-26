#include "main.h"

/**
 * _strlen - gets the string's  length returned
 * @s: the string to check
 * Return: int length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
