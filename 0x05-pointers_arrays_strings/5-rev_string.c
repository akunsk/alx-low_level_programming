#include <stdio.h>
#include "holberton.h"
/**
 *rev_string - function that reverses a string.
 *@s: value to be assessed.
 *Return: void.
 */
void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	int e = 0;
	int p;
	char *y = s;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		p = (l - e);
		n = s[e];
		s[e] = s[p];
		s[p] = n;
	}
}
