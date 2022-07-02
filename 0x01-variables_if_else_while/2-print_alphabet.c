#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point of a program
 * EXIT- is successful for this program
 * Return: always 0 success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		c = c + 1;
		putchar(c);
	}
	exit(EXIT_SUCCESS);
}
