#include "main.h"
/**
 *swap_int - this function swap value a to b
 *@*a - first pointer
 *@*b - second pointer
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
	*a = 98;
	*b = 42;
}
