#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _puts - a function that prints a string
 * @str: being parameter
 *
 * Return: 0 success
 */
void _puts(char *str)
{
	for (; *str != '/0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
