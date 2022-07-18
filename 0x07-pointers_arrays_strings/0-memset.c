#include "main.h"

/**
 * _memset -> this memory set function
 * @s: param string
 * @b: param character
 * @n: param integer
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int b;

	for ( b = 0; b < n; b++)
		s[b] = b;
	return (s);
}
