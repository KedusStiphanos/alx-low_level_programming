#include "main.h"

/**
 * _strncat - write a functino that concatenates two strings. it will use 
 *            at most n bytes from src
 *
 * @dest: Second string
 * @src: first string
 * @n: this is the number bytes fro src
 *
 * Return: My return
 */
char _strncat(char *dest, char *src, int n)
{
int i, c;

for (i = 0; dest[i] != '\0'; i++)
;
for (c = 0; c < n && src[c] != '\0'; c++)
{
dest[i] = src[c];
i++;
}
if (c < n)
{
dest[i] = '\0';
}
return (dest);
}
