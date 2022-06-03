#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description:A program that prints alphabets in lowercase
 *
 * * Return: Always 0 (Success)
 */
int main(void)
{

	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
		putchar('\n');

return (0);
}
