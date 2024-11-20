#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *str;

	if (s1 == NULL)
		i = 0;
	else
		while (*(s1 + i))
		{
			i++;
		}
	if (s2 == NULL)
		j = 0;
	else
		while (*(s2 + j))
		{
			j++;
		}
	str = malloc(sizeof(char) * (i + j) + 1);
	if (str == NULL)
		return (NULL);

	while (k != i)
	{
		str[k] = s1[k];
		k++;
	}
	while (k != i + j)
	{
		str[k] = s2[k - i];
		k++;
	}
	str[k] = 0;
	return (str);
}
