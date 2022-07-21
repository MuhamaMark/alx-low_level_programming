#include"main.h"
#include<string.h>
#include<stdio.h>
/**
 * is_palindrome -> checking for palindrome
 * @s: param1
 * @m: character
 * Return: string
 */
int is_palindrome(char *s)
{
	char *m;

	strcpy(s, m);
	strrev(m);
	
	if (strcmp(m, s) == 0)
		return (1);
	return (0);
}
