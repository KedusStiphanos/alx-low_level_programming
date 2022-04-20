#include <stdio.h>
#include "main.h"

/**
 * _strcpy - rev string
 * @dest: character
 * @src: character 
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (src[i])
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\0';
return (dest);
}
