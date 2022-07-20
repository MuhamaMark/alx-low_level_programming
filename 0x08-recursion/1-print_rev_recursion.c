#include "main.h"
#include<stdio.h>
/**
 * _print_rev_recursion -> a function that prints a string in reverse.
 * @s: param1
 * Return: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		reverse(s + 1);
		_putchar(*s);
	}
}
