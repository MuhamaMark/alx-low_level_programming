#include "main.h"
/**
 * main - entry point of the program
 * Result: alwasy 0 success
 * print lower case alphabet using headercreated
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
