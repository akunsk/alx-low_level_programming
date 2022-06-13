#include <stdio.h>
#include "main.h"
/**
 *puts2 - prints every other character of a string.
 *@str: value to be assessed.
 *Return: void.
 */
void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *x = str;
	int y;

	while (*x != '\0')
	{
		x++;
		len++;
	}
	l = len - 1;
	for (y = 0 ; y <= l ; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
