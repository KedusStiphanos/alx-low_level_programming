#include "main.h"

/**
 * _islower - check
 *@i: to be checked
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int i)
{
if (i >= 'a' && i <= 'z')
return (1);
else
return (0);
}
