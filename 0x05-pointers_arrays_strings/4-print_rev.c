#include "w"

/**
 * print_rev - rev string
 * @s: to be reversed
 * Return: void
 */
void print_rev(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
;
}

i = i - 1;
for (; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
