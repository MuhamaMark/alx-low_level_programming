#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strncat -> function that concatenates two strings.
 * @dest: paramater
 * @src: parameter
 * @n: integer parameter
 *
 * Return: 0 always success
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, j = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}

	while (j < n && src[j])
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}
	dest[dest_len + n + 1] = '\0';

	return (dest);
}
