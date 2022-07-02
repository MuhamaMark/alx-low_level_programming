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

	while(c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	exit(EXIT_SUCCESS);
}
