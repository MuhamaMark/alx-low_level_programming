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
	}
	while (hi <= 'Z')
	{
		putchar(hi);
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
