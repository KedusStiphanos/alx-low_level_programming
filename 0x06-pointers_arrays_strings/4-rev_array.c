#include "main.h"

/**
 * reverse_array - write a functino that compares
 * @a: Second string
 * @n: first string
 *
 * Return: My return
 */

void reverse_array(int *a, int n)
{
int i, l;

l = n - 1;
for (i = 0; i < n / 2; i++)
{
	int s, e;

	s = a[i];
	e = a[l];
	a[i] = e;
	a[l] = s;
	l--;
}
}
