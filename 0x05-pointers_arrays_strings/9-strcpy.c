#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strcpy -> function to copy a string
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: points to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
