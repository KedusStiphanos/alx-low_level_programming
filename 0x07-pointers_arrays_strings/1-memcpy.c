#include "main.h"
/**
* char *_memcpy - copies n bytes from memory area src to memory area dest
* @dest: destination
* @src: source
* @n: number of bytes
* Return: to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

int i;
{

for (i = 0; i < n; i++)
dest[i] = src[i];
}
return (dest);

}
