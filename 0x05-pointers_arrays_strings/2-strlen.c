#include "main.h"

/**
 * _strlen - returns the length of a string
 * @i: string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;
	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
