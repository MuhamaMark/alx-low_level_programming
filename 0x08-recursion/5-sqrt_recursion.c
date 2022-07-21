#include "main.h"
#include <stdio.h>
#include<math.h>

int _sqrt(int, int);
/**
 * _sqrt_recursion -> a function that returns the natural square root.
 * @n: param1
 * Return: square root of natural number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> recursive square root
 * @n: number
 * @i: iterator
 * Return: a number
 *
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
