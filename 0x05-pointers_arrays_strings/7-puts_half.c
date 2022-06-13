#include <stdio.h>
#include "main.h"
/**
 *puts_half - a function that prints half of a string.
 *@str: value to be assessed.
 *Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	char *a = str;
	int x;

	while (*a != '\0')
	{
		a++;
		len++;
	}
	if (len % 2 == 0)
	{
		x = len / 2;
	}
	else
	{
		x = (len + 1) / 2;
	}
	for ( ; x < len ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
