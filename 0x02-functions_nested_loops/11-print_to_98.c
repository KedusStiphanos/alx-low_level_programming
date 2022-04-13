#include "main.h"

/**
 * print_to_98 - print all natural number
 *               separated by a comma and space
 *@n: number to start with
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}

else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
