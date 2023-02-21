#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int first, second, fibo;

	first = 1;
	second = 2;
	printf("%ld, %ld", first, second);
	for (i = 0; i < 48; i++)
	{
		fibo = first + second;
		printf(", %ld", fibo);
		first = second;
		second = fibo;
	}
	printf("\n");
	return (0);
}
