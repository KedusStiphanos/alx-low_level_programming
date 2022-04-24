#include "w"

/**
 * print_array - prints n elements of an array of integer.
 * @a: pointer to an array
 * @n: number of array elements.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i, j;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
j = n - 1
if (i != j)
{
printf(",");
printf(" ");
}
}
printf("\n");
}
