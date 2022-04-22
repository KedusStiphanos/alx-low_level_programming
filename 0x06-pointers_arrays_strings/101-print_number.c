#include "main.h"

/**
 * print_number - concatenates two strings
 *
 * @n: integer to be printed
 * 
 * Return: pointer to resulting string dest
 */

void print_number(int n)
{
	unsigned int num;
	num = n;
	if (n < 0)
	{ _putchar(45);
		num = -n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
