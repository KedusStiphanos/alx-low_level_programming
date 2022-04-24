#include "w"
#include <stdio.h>

/**
 * _atoi - rev string.
 * @s: string.
 *
 * Return: int.
 */

int _atoi(char *s)
{
int i = 0, j, s = 1;
unsigned int r = 0;
char n;

while (*(s + i) != '\0')
{
n = *(s + i);
if (n == '-')
{
s *= -1;
}
if (n >= '0' && n <= '9')
{
	j = i;
	while (*(s + j) > 47 && *(s + j) < 58)
{
	r = (r * 10) + *(s + j) - '0';
	j++;
}
break;
}
i++;
}
if (s < 0)
	r *= s;
return (r);
}
