#include "main.h"

/**
 * _isalpha - check alphabetic
 * @c: to be cheked
 *
 * Return: 1 if letter, lc or uc, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
