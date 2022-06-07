#include "main.h"
/**
 * print_alphabet_x10 - print alphabets times 10
 * Description: prints the alphabet in lowercase x10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char n;
	int i = 0;

	while (i <= 9)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
