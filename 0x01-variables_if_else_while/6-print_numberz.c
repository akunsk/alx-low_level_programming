#include <stdio.h>

/**
 * main - print single numbers using putchar
 * Description: a program to print only numbers
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);

}
