#include "main.h"
/**
 *swap_int - this function swap value a to b
 *
 *@a: first pointer variable
 *@b: second pointer variable
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
