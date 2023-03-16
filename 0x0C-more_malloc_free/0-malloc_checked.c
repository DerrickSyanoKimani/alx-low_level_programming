#include "main.h"
#include <stdlib.h>

/*
 * malloc_check - allocates memory.
 * @ptr - a pointer to the allocated memory.
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;


	ptr = malloc(sizeof(b));
	if(ptr==NULL)
		exit(98);
	return (ptr);
}
