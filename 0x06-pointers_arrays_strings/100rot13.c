#include "main.h"
/**
 * rot13 - write a functinon that encodes a string into 1337
 * 
 * @hi: This is input string
 *
 * Return: String converted to 13
 *
 */

char *rot13(char *hi)
{
int i, c;

char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; hi[i] != '\0'; ++i)
{
	for (c = 0; m[c] != '\0' ; c++)
	{
		if (hi[i] == m[c])
		{
			hi[i] = n[c];
			break;
		}
	}
}
hi[i] = '\0';
return (hi);
}
