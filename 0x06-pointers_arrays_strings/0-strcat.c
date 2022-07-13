#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strcat -> function tp concatnate two strings
 * @dest: parameter for destination
 * @src: parameter for source
 *
 * Return: string in dest param
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len++])
		i++;

	for (len = 0; src[len]; len++)
	{
		dest[i++] = src[len];
	}
	return (dest);
}