#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * @c: the char to check
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
