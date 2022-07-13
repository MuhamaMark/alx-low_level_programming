#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strcat -> function tp concatnate two strings
 * @dest: parameter for destination
 * @src: parameter for source
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest)
}
