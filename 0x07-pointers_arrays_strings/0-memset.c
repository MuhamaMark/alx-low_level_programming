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
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}
