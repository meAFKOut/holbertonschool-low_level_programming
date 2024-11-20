#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars
 * @size: size of malloc
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
