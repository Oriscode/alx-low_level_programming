#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
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
