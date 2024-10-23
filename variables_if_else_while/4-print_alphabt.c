#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char kamal = 'a';

	while (kamal <= 'z')
	{
		if (kamal != 'q' && kamal != 'e')
		{
			putchar(kamal);
		}
		kamal++;
	}
	putchar('\n');
	return (0);
}
