#include "main.h"
/**
 * -puts - put string
 *  @str: character
 *  Return: string
 */

	void _puts(char *str)
	{
		int str;

		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
		return;
	}
