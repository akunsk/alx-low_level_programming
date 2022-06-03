#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Description:A program that prints base 16 num in lowercase
 * Return: 0
 */
int main(void)
{
		char digit;

		for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

		for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

		putchar('\n');
	return (0);
}
