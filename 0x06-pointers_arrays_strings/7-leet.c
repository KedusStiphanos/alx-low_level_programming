#include "main.h"

/**
 * leet - write a functinon that capitalizes all words of a string
 * 
 * @changed: input string
 *
 * Return: My return
 */

char *leet(char *changed)
{
int i, j;
char m[] = {'a', 'e', 'o', 't', 'l', '\0'};
char n[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char o[] = {'4', '3', '0', '7', '1', '\0'};

for (i = 0; changed[i] != '\0'; i++)
{
	for (j = 0; j < 5; j++)
	{
		if (changed[i] == m[j] || changed[i] == n[j])
		{
			changed[i] = o[j];
		}
	}
}
return (changed);
}
