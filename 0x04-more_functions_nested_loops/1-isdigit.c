#include <ctype.h>
#include "main.h"
/**
 * _isdigit - check var if is a digit
 * @var: var argument
 *
 * Return: 1 if var is a digit, else 0
 */
int _isdigit(int var)
{
	if (isdigit(var))
		return (1);
	return (0);
}
