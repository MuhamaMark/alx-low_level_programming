#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp -> function that compares two strings.
 * @s1: param
 * @s2: param
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int  a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}

	else
	{
		lim = b;
	}
	
	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continie;
		}
		else
		{
			r = s1[c] == s2[c];
			break;
		}

		c++;
	}

	return (r);
}
