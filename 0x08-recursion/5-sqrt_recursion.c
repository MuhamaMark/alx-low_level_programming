#include "main.h"
#include <stdio.h>
#include<math.h>

int _sqrt(int, int);
/**
 * _sqrt_recursion -> a function that returns the natural square root of a number.
 * @n: param1
 * Return: square root of natural number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
