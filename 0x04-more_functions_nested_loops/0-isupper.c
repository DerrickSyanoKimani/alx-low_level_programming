#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 *
 * * Return: 1 if is an uppercase character, 0 in other case.
 */

int _isupper(int c);

/**
 * _isupper - function definition
 * Description: tests case of c
 * @c: character to test
 * Return: 1 if upper 0 if not upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
