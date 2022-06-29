#include <stdio.h>
/**
 * main 
 *
 * Description: print size of variables on scree
 *
 * Return: return (0)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of long int: %zu byte\n", sizeof(long int));
	printf("Size of long long int: %zu byte\n", sizeof(long long int));
	return (0);
}
