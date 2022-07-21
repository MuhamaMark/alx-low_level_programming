#include "main.h"
#include<stdio.h>
#include<math.h>
/**
 * _pow_recursion -> a function that returns the factorial of a given number.
 * @x: param1
 * @y: param2
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
