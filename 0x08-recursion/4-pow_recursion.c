#include "main.h"
#include<stdio.h>
/**
 *
 */
int _pow_recursion(int x, int y)
{
	if (y <= 0)
		return (-1);
	else
		return (pow(x,y));
}
