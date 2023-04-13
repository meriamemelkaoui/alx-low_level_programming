#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a fct to allocate memory
* @b: the size of the memory
*
* Description: exit with a status of 98 if failed
* Return: the pointer to the allocated memory or a exit of 98
*/

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
