#include "w"
/**
 * _strcpy - rtringat the end of another string including \0.
 * @dest: pointer to string to be copied.
 * @src: pointer to string to be copied.
 *
 *  Return: pointer to dest.
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
