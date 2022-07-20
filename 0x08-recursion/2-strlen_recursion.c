#include "main.h"
#include<stdio.h>
/**
 * _strlen_recursion - function of a string to print length using recursion
 * @s: param1
 * Return: integer
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
