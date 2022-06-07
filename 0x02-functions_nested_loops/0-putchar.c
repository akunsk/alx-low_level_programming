#include "main.h"

/**
 * main - prints string "_putchar" using
 * Description: _putchar() function prototype
 * Return: 0
 */
int main(void)
{
	char King[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(King[i]);
	}
	_putchar('\n');
	return (0);
}
