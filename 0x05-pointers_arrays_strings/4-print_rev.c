#include "main.h"

/**
 * print_rev - rev string
 * @s: to be reversed
 * Return: void
 */
void print_rev(char *s)
{
int i, j, k;

j = 0;

for (i = 0; s[i] != '\0'; i++)
{
j++;
}

for (k = j - 1; k >= 0 ; k--)
{
_putchar(s[k]);
}
_putchar('\n');
return;
}
