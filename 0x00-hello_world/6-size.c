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

	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu byte\n", sizeof(long int));
	printf("Size of a long long int: %zu byte\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
