#include"main.h"
#include<string.h>
#include<stdio.h>
/**
 * cap_string -> capitalization function
 * @t: param
 * Return: string
 */
char *cap_string(char *t)
{
	int a = 0, i;
	int spc = 13;
	char sp[] = {32, '\t', '\n', 44, '!', '?', '"', '(', ')', '{', '}'};

	while (t[a])
	{
		i = 0;

		while (i < spc)
		{
			if ((a == 0 || t[a - 1] == sp[i] && (t[a] >= 97 && t[a] <= 122))
				t[a] = t[a] - 32;
			i++;
		}

		a++;
	}
	return (t);
}
