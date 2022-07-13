#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp -> function that compares two strings.
 * @s1: param
 * @s2: param
 *
 * Return: 0, 1
 */
int _strcmp(char *s1, char *s2)
{
	strcmp(s1, s2);
	
	if (s1 == s2)
		return (0);

	else
		return (1);
}
