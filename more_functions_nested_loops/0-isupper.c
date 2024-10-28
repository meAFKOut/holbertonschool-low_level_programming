#include "main.h"

/**
 * _isupper - check the code.
 * @a: Variable.
 * Return: 1 or 0
 */

int _isupper(int a)
{
	if (a > 64 && a < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
