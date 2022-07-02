#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point of a program
 * Return: always 0 success
 * exit is successful
 */
int main(void)
{
	char lo = 'a';
	char hi = 'A';

	while (lo <= 'z')
	{
		putchar(lo);
		lo = lo + 1;
	}
	while (hi <= 'Z')
	{
		putchar(hi);
		hi = hi + 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
