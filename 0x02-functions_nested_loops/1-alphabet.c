#include "main.h"
/**
 * main - entry point of the program
 * print_alphabet function - print lowercase alphabet
 */
void print_alphabet(void)//print_alphabet function - print lowercase alphabet
{
	int lo = 'a';

	while (lo <= 'z')
	{
		_putchar(lo);
		lo = lo + 1;
	}
	_putchar('\n'); }
