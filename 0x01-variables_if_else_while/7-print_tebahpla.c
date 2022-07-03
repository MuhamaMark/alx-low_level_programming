#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point of program
 * Return: always 0 success
 */
int main(void)
{
	char re = 'z';

	while (re >= 'a')
	{
		putchar(re);
		re = re - 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
