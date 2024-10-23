#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kamal = 'z';

	while (kamal >= 'a')
	{
		putchar(kamal);
		kamal--;
	}
	putchar('\n');
	return (0);
}
