#include "main.h"
#include <stdio.h>
#include<math.h>
/**
 * _sqrt_recursion -> a function that returns the natural square root of a number.
 * @n: param1
 * Return: square root of natural number
 */
int _sqrt_recursion(int n)
{
	if (pow(n, 0.5) <= 0)
	{
		return (-1);
	}
	return (pow(n, 0.5));
}
