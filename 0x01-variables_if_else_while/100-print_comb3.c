#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	int a = '0';
	int b = '0';
	
	for (a; a <= '9'; a++)
	{
		for (b; b <= '9'; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8' && (a == '8' || b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
