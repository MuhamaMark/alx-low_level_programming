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
	strcat(dest, src);
	return (dest);
}
