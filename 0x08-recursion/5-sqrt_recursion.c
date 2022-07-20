#include "main.h"
#include <stdio.h>
#include<math.h>
/**
 * _sqrt_recursion -> a function that returns the natural square root of a number.
 * @n: param1
 */
int _sqrt_recursion(int n)
{
	if (sqrt(n) <= 0 || (sqrt(n) % 10) != 0)
	{
		return (-1);
	}
	else
	{
		sqrt(n);
		return (0);
	}
}
