#include "main.h"

/**
 * swap_int - swaps two numbers
 * @a: first number
 * @b: second number
 *
 * Return: void
 */

void swap_int(int *a, int *b)

{
int x;
x = *b;
*b = *a;
*a = x;
}
