#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int first, second, fibo, ans;

	first  = 1;
	second  = 2;
	fibo = ans  = 0;
	while (fibo <= 4000000)
	{
		fibo = first + second;
		first = second;
		second = fibo;
		if ((first % 2) == 0)
		{
			ans += first;
		}
	}
	printf("%ld\n", ans);
	return (0);
}
