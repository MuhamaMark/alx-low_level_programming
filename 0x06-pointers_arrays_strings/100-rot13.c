#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 *
 *
 *
 *
 */
char *rot13(char *p)
{
	int a = o;

	while (s[a])
	{
		while ((s[a] >= 'a' && s[a] <= 'z) || (s[a] >= 'A' && s[a] <= 'z'))
		{
			if ((s[a] > 'm' && s[a] <= 'z') || (s[a] > 'M' && s[a] <= 'Z'))
			{
				s[a] -= 13;
				break;
			}
			s[a] += 13;
			break;
		}
		a++;
	}
	return (s);
}
