#include "main.h"
/**
 * main - entry point of the program
 * print_alphabet -> print lowercase alphabet
 */
void print_alphabet(void)
{
	int lo = 'a';
	
	while (lo <= 'z')
	{
		_putchar(lo);
		lo = lo + 1;
	}
	_putchar('\n'); }
