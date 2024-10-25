#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ulvi = '0';

	while (ulvi <= '9')
	{
		putchar(ulvi);
		ulvi++;
	}

	putchar ('\n');

	return (0);
}
