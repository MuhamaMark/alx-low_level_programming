#include"main.h"
#include<stdio.h>
/**
 * print_numbers - Prints the numbers from 0-9.
 * Return: (0) always success
 */
void print_numbers(void)
{
	int num = 0;

	while (num <= 0)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
	return (0);
}
