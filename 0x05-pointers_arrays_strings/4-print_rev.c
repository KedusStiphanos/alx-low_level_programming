#include "main.h"

/**
 * print_rev - rev string
 * @s: to be reversed
 * Return: void
 */
void print_rev(char *s)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
continue;
}
j = i - 1;
for (i = j; i >= 0 ; j--)
{
_putchar(s[i]);
}
_putchar('\n');
return;
}
