#include "main.h"
#include <unistd.h>
/**
 *_puts - returns a string, to stdout
 *@str: value to be assessed.
 *Return: void.
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
