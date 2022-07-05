#include "main.h"
/**
 * main - entry point
 *
 * Description: printing alphabet in lower case
 *
 * Return: alway(0) Success
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
