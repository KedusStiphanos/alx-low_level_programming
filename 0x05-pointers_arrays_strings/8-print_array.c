#include "w"

/**
 * print_array - rev string
 * @a: integer to be reversed
 * @n: integer 
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i < (n - 1))
	{
		printf(", ");
	}
}
printf("\n");
}
