#include <stdio.h>

/**
 * main - Print the alphabet in reverse in lowercase
 * Description:A program that prints alphabets in lowercase
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
