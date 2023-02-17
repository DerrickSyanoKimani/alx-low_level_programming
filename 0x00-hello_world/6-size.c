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

		printf("Size of a char:\n",sizeof(charType));
		printf("Size of an int:\n", sizeof(intType));
		printf("Size of a long long int:\n", sizeof(longType));
		printf("Size of a long long int\n", sizeof(longLongType));
		printf("Size of a float:\n", sizeof(floatType));

		return (0);
	}
