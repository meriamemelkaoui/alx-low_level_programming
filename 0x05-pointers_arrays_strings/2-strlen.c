#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @str: char to check
 *
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *str)

{
	int len  = 0;

	while (*str++)
	len++;
	return (len);
}
