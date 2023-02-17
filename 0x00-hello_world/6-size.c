#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
		char charType;
		int intType;
		long int longType;
		long long int longLongType;
		float floatType;

		printf("Size of a char: %zu bytes \n",sizeof(charType));
		printf("Size of an int: %zu bytes \n", sizeof(intType));
		printf("Size of a long long int: %zu bytes \n", sizeof(longType));
		printf("Size of a long long int: %zu bytes \n", sizeof(longLongType));
		printf("Size of a float: %zu byte\n", sizeof(floatType));

		return (0);
	}
