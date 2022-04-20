#include "main.h"

/**
 * print_array - rev string
 * @a: integer to be reversed
 * @n: integer 
 * Return: void
 */
void print_array(int *a, int *n)
{
int i;
for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i < (n - 1))
	{
		printf(", ");
iy
	i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
