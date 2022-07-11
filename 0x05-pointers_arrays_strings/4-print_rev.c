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
	for (; *s == '\0'; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
