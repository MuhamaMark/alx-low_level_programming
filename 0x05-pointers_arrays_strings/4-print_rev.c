#include "main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * print_rev -> printing string in reverse
 * @s: parameter
 *
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
