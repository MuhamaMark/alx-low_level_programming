#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	int base16 = 0;
	char c = 'a';

	while (base16 <= 9)
	{
		putchar((base16 % 10) + '0');
		base16 = base16 + 1;
	}
	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
