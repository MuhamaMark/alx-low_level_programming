#include "main.h"
#include<stdio.h>
/**
 * factorial -> print factorila of a number
 * @n: param1
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
